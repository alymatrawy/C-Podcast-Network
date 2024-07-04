#include "PodcastPlayer.h"


void PodcastPlayer::play(const Episode& m, ostream& ost)const{
    ost << m.getAudio() << endl;
}



void AudioPlayer::play(const Episode& m, ostream& ost)const{
    ost << m.getAudio() << endl;
}


void VideoPlayer::play(const Episode& m, ostream& ost)const{
    ost << m.getAudio() << endl;

    ifstream infile(m.getVideoFile());


    if (!infile) {
        cout << "Error: could not open file" << endl;
        exit(1);
    }

    else{
        string line;

        while(getline(infile,line)){
            ost << line << endl;
        }

        infile.close();
    }



}