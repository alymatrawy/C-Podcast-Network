#ifndef PODCASTPLAYER_H
#define PODCASTPLAYER_H

#include <iostream>
#include <string>
#include <fstream>
#include "Episode.h"

using namespace std;


class PodcastPlayer{

   public:
        virtual void play(const Episode& m, ostream& ost) const;

};

class AudioPlayer : public virtual PodcastPlayer{
    virtual void play(const Episode& m, ostream& ost) const override;
};


class VideoPlayer : public virtual PodcastPlayer{
    virtual void play(const Episode& m, ostream& ost) const override;
};


#endif