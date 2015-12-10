#ifndef BOULDERD_H
#define BOULDERD_H
#include <string>

class Data
{
    public:
        Data(int, double, double, std::string, std::string, std::string, std::string);

        // GET METHODS
        int getId();
        double getLat();
        double getLng();
        std::string getName();
        std::string getType();
        std::string getDonorType();
        std::string getDonorSqft();

        // SET METHODS
        void setId(int);
        void setName(std::string);
        void setLat(double);
        void setLng(double);
        void setType(std::string);
        void setDonorType(std::string);
        void setDonorSqft(std::string);

    private:
        int id;
        std::string name;
        double lat;
        double lng;
        std::string type;
        std::string donor_type;
        std::string donor_sqft;
};
/*
class FileProcessor
{
    public:
        std::string openFile(std::string); // takes filename, returns file content
        void processFile(std::string); // takes file content and sets the data array with data objects
        void pushData(Data);
        Data[] getData(); // returns array with data objects

    private:
        Data[10000] data; // array that will store data objects
};
*/
#endif // APPLEFARMER_H