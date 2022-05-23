#include "News.h"
#include <iostream>
#include <string>
#include <fstream>






int News::cnt = 0;
News::News() {

}
News::News(int id, std::string title, std::string Description, std::string Date) {

	this->title = title;
	this->Description = Description;
	this->Date = Date;
	Rate = 0;
}

void News::setCategory(std::string Catg) {
	this->Category = Catg;
}

void News::setID(int id) {
	this->ID = id;
}
void News::setTitle(std::string title)
{
	this->title = title;
}
void News::setDescription(std::string Description)
{
	this->Description = Description;
}
void News::setDate(std::string Date)
{
	this->Date = Date;

}
void News::setRate(double x)
{
	Rate = x;
}
void News::setimgpath(std::string imgpath) {
	this->imgpathh = imgpath;
}

int News::getId() {
	return ID;
}
const std::string& News::getTitle() const {
	return title;
}
std::string News::getDescription()
{
	return Description;
}
std::string News::getDate()
{
	return Date;
}
double News::getRate() {
	return Rate;

}
std::string News::getimgpath() {
	return imgpathh;
}

void News::setCntRate(int cnt) {
	this->cntRate = cnt;
}
void News::setTotalRate(double total) {
	this->totalRate = total;
}

double News::getTotalRate() {
	return totalRate;
}
int News::getCntRate() {
	return cntRate;
}

std::deque<std::string> News::getComments() {
	return comms;
}
void News::addComment(std::string s) {
	comms.push_back(s);
}

void News::UserRate(double UserRate, double last) {

	totalRate -= last;
	if (last)
		cntRate--;
	totalRate += UserRate;
	cntRate++;
	Rate = totalRate / cntRate;
	
}



News::~News()
{

}