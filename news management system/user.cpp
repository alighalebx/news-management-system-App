#include "user.h"
#include <iostream>
#include <string>
#include <queue>
#include <utility>
//#include "News.h"
#include <fstream>
#include <sstream>


void user::RateNews(std::string s,double d) {

    for (auto &i : mp)
    {
           
            for (auto &j : i.second)
            {
                if (s == std::to_string(j.getId())) {
                    j.UserRate(d, isRated[s]);
                    isRated[s] = d;
                }
            }
           

    }
  

}

void user::CommentsNews(std::string s, std::string s1) {

    for (auto& i : mp)
    {

        for (auto& j : i.second)
        {
            if (s == std::to_string(j.getId())) {
                j.addComment(s1);
                /*j.UserRate(d, isRated[s]);
                isRated[s] = d;*/
            }
        }


    }


}

user::user() {
}


void user::readspam() {


    std::string s = name + "spam.txt";
    std::fstream MF;
    MF.open(s, std::ios::in);
    if (MF.is_open()) {

        while (!MF.eof())
        {

            getline(MF, s);
            spamlist[s] = true;
        }
    }
    MF.close();

}void user::writespam() {
    std::string s = name + "spam.txt";
    std::fstream MF;
    MF.open(s, std::ios::out);
    if (MF.is_open()) {
        for (auto i : spamlist) {
            if (i.second && !i.first.empty()) {
                MF << i.first << "\n";
            }

        }
    }
    MF.close();

}
void user::readnews() {


    std::string s;
    std::fstream MF;
    std::vector< std::string>v;
    MF.open("categories.txt", std::ios::in);

    if (MF.is_open()) {

        while (!MF.eof())
        {

            getline(MF, s);
            v.push_back(s);
        }
        MF.close();
        News n;
        for (auto i : v) {
            mp[i];
            MF.open(i, std::ios::in);
            if (MF.is_open()) {
                while (!MF.eof()) {
                    getline(MF, s);
                    int a;
                    try {
                        a = stoi(s);
                        n.setID(a);
                        getline(MF, s);
                        n.setTitle(s);

                        getline(MF, s);
                        n.setDescription(s);
                        getline(MF, s);
                        n.setimgpath(s);
                        getline(MF, s);
                        n.setDate(s);
                        getline(MF, s);
                        double x;
                        
                        try {
                            x = stod(s);
                        }
                        catch (...) {
                            x = 2.5;
                        }

                        n.setRate(x);
                        getline(MF, s);
                        n.setCntRate(std::stoi(s));
                        getline(MF, s);
                        n.setTotalRate(std::stod(s));

                        mp[i].push_back(n);
                        readcomment(mp[i].back());
                        
                        
                    }

                    catch (...) {

                    }
                    
                }
            }
            MF.close();
        }

    }

}

void user::writenews() {


    std::string s;
    std::fstream MF;
    for (auto i : mp)
    {
        MF.open(i.first, std::ios::out);

        if (MF.is_open()) {
            for (auto j : i.second)
            {
                writecomment(j);
                MF << j.getId() << "\n";
                MF << j.getTitle() << "\n";
                MF << j.getDescription() << "\n";
                MF << j.getimgpath() << "\n";
                MF << j.getDate() << "\n";
                MF << j.getRate() << "\n";
                MF << j.getCntRate() << "\n";
                MF << j.getTotalRate() << "\n";

            }
            MF.close();
        }
    }
}


void user::readrate() {


    std::string s = name + "rate.txt", h;
    std::fstream MF;
    MF.open(s, std::ios::in);
    if (MF.is_open()) {

        while (!MF.eof())
        {
            getline(MF, s);
            getline(MF, h);

            try {
                isRated[s] = stod(h);
            }
            catch (...) {

            }
        }
    }
    MF.close();
}void user::writerate() {
    std::string s = name + "rate.txt";
    std::fstream MF;
    MF.open(s, std::ios::out);
    if (MF.is_open()) {
        for (auto i : isRated) {
            if (i.second && !i.first.empty())
                MF << i.first << "\n" << i.second << "\n";
        }
    }
    MF.close();

}void user::start() {

    readspam();
    readrate();
    readnews();


}void user::end() {
    writespam();
    writerate();
    writenews();

}




user::user(std::string username) {
    this->name = username;
    //spamlist["3"] = true;
    
    start();

}


void user::readcomment(News& news) {
    std::string s = std::to_string(news.getId()) + "comments.txt";
    std::fstream MF;
    MF.open(s, std::ios::in);

    if (MF.is_open()) {
        while (!MF.eof())
        {
            getline(MF, s);
            if(!s.empty())
            news.addComment(s);
        }
    }
    MF.close();
}

void user::writecomment(News& news) {
    std::string s = std::to_string(news.getId()) + "comments.txt";
    std::fstream MF;
    MF.open(s, std::ios::out);
    if (MF.is_open()) {
        for (auto i : news.getComments()) {
            if (!i.empty()) {
                MF << i << "\n";
            }
        }
    }
    MF.close();
}


std::list<News> user::ShowNewsDep(std::string categ) {

    std::list<News>temp;
    for (auto i : mp[categ]) {
        if (!spamlist[std::to_string(i.getId())] && i.getRate() > 2) {
            temp.push_front(i);
        }
    }



    return temp;

}

user::~user() {
}


