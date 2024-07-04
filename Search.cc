#include "Search.h"



bool Search::matches(const Episode* e)const{return true;}

void Search::print(ostream& ost)const{}

//H_search

H_Search::H_Search(string host){
    this->host = host;
}

bool H_Search::matches(const Episode* e)const{
    return this->host == e->getHost();
}

void H_Search::print(ostream& ost)const{
    ost << "Search by host: " << host;
}


//C_search

C_Search::C_Search(string category){
    this->category = category;
}

bool C_Search::matches(const Episode* e)const{
    return this->category == e->getCategory();
}

void C_Search::print(ostream& ost)const{
    ost << "Search by category: " << category;
}

//HoC_Search


HorC_Search::HorC_Search(string host, string category): H_Search(host), C_Search(category){
    this->host = host;
    this->category= category;
}

bool HorC_Search::matches(const Episode* e)const{
    return H_Search::matches(e)||C_Search::matches(e);
}

void HorC_Search::print(ostream& ost)const{
    ost << "Search by host or category: " << host << category;
}

ostream& operator<<(ostream& ost, const Search& s){
    s.print(ost);
    return ost;
}