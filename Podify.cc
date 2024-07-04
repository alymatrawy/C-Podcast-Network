#include "Podify.h"



Podify::~Podify(){
    for (int x=0; x<podcasts.getSize(); x++){
        delete podcasts.operator[](x);
    }
}

void Podify::addPodcast(Podcast* podcast){
    podcasts.operator+=(podcast);
}


void Podify::addEpisode(Episode* episode, string podcastTitle){
    for(int x=0; x<podcasts.getSize(); x++){
        if(podcasts.operator[](x)->equals(podcastTitle)){
            podcasts.operator[](x)->add(episode);
            return;
        }
    }

    cout << "Episode not found" << endl;
}


const Array<Podcast*>& Podify::getPodcasts()const{
    return podcasts;
}


Podcast* Podify::getPodcast(int index)const{
    return podcasts.operator[](index);
}


Podcast* Podify::getPodcast(string title)const{

      for(int x=0; x<podcasts.getSize(); x++){
        if(podcasts.operator[](x)->equals(title)){
            return podcasts.operator[](x);
        }
    }

    cout << "Podcast not found" << endl;

    exit(1);

}

void Podify::getEpisodes(const Search& search,Array <Episode*>& episodes){
    for(int x=0; x<podcasts.getSize(); x++){

        for(int z=0; z<podcasts.operator[](x)->getSize();z++){
            Episode* episode = podcasts.operator[](x)->get(z);

            if(search.matches(episode)){
                episodes.operator+=(episode);
            }
        }
    }
}