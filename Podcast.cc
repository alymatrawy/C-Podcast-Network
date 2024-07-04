#include "Podcast.h"



Podcast::Podcast(string title, string host){
    this->title=title;
    this->host= host;
}

Podcast::~Podcast(){
    for(int x=0; x<getSize(); x++){
        delete episodes.operator[](x);
    }
}

bool Podcast::equals(const string& title)const{
    return this->title==title;
}


Episode* Podcast::get(int index)const{
    return episodes.operator[](index);
}


int Podcast::getSize()const{
    return episodes.getSize();
}

void Podcast::print(ostream& ost)const{
    ost << title << host;
}


void Podcast::printWithEpisodes(ostream& ost)const{
    print(ost);
    for(int x=0; x<getSize();x++){
        episodes.operator[](x)->print(ost);
    }
}


void Podcast::add(Episode* episode){
    episodes.operator+=(episode);
}

ostream& operator<<(ostream& ost, const Podcast& p){
    p.print(ost);
    return ost;
}