#include "Episode.h"


Episode::Episode(string podcastTitle, string host, string episodeTitle, string category, string audio, string videoFile){
    this->podcastTitle  = podcastTitle;
    this->host = host;
    this->category = category;
    this-> episodeTitle = episodeTitle;
    this->audio = audio;
    this->videoFile = videoFile;
}


string Episode::getPodcastTitle()const{
    return podcastTitle;
}


string Episode::getHost()const{
    return host;
}

string Episode::getCategory()const{
    return category;
}

string Episode::getEpisodeTitle()const{
    return episodeTitle;
}


string Episode::getAudio()const{
    return audio;
}


string Episode::getVideoFile()const{
    return videoFile;
}

void Episode::print(ostream& ost)const{
    ost << podcastTitle << host << episodeTitle << audio << videoFile;
}

ostream& operator<<(ostream& ost, const Episode& e){
    e.print(ost);
    return ost;
}