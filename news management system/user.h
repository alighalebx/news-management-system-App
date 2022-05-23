#pragma once
#include <iostream>
#include <string>
#include <queue>
#include <vector>
#include <utility>
#include "News.h"
#include <map>
#include <list>


class user
{
private:

    
    void start();
    
    void readspam();
    void writespam();
    void readrate();
    void writerate();
    void readnews();
    void writenews();
    


public:
    void end();
    //std::string s="0";
    std::string name;
    std::map < std::string, std::list< News > >mp;
    std::map < std::string, double >isRated;
    std::map < std::string, bool >spamlist;
    user();
    user(std::string username);
   
    void CommentsNews(std::string, std::string);
    void RateNews(std::string ,double);
    void readcomment(News&);
    void writecomment(News&);
    std::list<News> ShowNewsDep(std::string categ);

    ~user();


};
