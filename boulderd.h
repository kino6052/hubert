#ifndef BOULDERD_H
#define BOULDERD_H
#include <string>
using namespace std;

class Data
{
    public:
        Data(int, double, double, string, string, string, string);

        // GET METHODS
        int getId();
        double getLat();
        double getLng();
        string getName();
        string getType();
        string getDonorType();
        string getDonorSqft();

        // SET METHODS
        void setId(int);
        void setName(string);
        void setLat(double);
        void setLng(double);
        void setType(string);
        void setDonorType(string);
        void setDonorSqft(string);

    private:
        int id;
        string name;
        double lat;
        double lng;
        string type;
        string donor_type;
        string donor_sqft;
};


#endif // APPLEFARMER_H