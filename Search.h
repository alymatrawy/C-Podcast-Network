#ifndef SEARCH_H
#define SEARCH_H

#include <iostream>
#include <string>
#include "Episode.h"

using namespace std;



class Search{

    public: 
        virtual bool matches(const Episode* e)const;
        virtual void print(ostream& ost)const;
        friend ostream& operator<<(ostream& ost, const Search& s);
};


class H_Search: public virtual Search{
    private:
        string host;
    public:
        H_Search(string host);
        bool matches(const Episode* e)const override;
        void print(ostream& ost) const override;
};


class C_Search: public virtual Search{
    private:
        string category;
    public:
        C_Search(string category);
        bool matches(const Episode* e)const override;
        void print(ostream& ost) const override;
};



class HorC_Search: public H_Search, public C_Search{
    private: 
        string host;
        string category;
    
    public:
        HorC_Search(string host, string category);
        bool matches(const Episode* e)const override;
        void print(ostream& ost) const override;
};




#endif