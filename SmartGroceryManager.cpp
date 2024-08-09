#include <iostream>
using namespace std;
class weightLifter{
    public:
    double sugar;
    double rice;
    double floor;
    private:
    double avail_sugar;
    double avail_rice;
    double avail_floor;
    public:
    weightLifter()
    {
        sugar =0;
        rice = 0;
        floor = 0;
        avail_sugar = 60;
        avail_rice = 70;
        avail_floor = 90;
    }
    void setGroceeryStuff(double s, double r, double f, double sp, double rp, double fp)
    {
           
            sugar =s;
            rice = r;
            floor = f;
            if( avail_sugar *1000< s)
            {
                cout <<"Sorry! Sugar is out of stock:(" << endl;
            }
            else if(avail_sugar*1000 > s)
            {
                cout <<"Yes! Sugar is available: " <<avail_sugar <<" KG" << endl;
                avail_sugar = avail_sugar * 1000;
                avail_sugar = avail_sugar-s;
                cout <<"\nYour Price Of Sugar Is : " <<sp <<" RS" << endl;
            }
            if(avail_rice*1000 < r)
            {
                cout <<"Sorry! Rice is out of stock:(" << endl;
            }
            else if(avail_rice*1000 > r)
            {
                cout <<"Yes! Rice is available: "<< avail_rice <<" KG" << endl;
                avail_rice = avail_rice * 1000;
                avail_rice = avail_rice-r;
                cout <<"\nYour Price Of Rice Is : " <<rp <<" RS" << endl;
            }
            if(avail_floor*1000 < f)
            {
                cout <<"Sorry! Floor is out of stock:(" << endl;
            }
            else if(avail_floor*1000 > f)
            {
                cout <<"Yes! Floor is available: " <<avail_floor <<" KG"<< endl;
                avail_floor = avail_floor * 1000;
                avail_floor = avail_floor - f;
                cout <<"\nYour Price Of Floor Is : " <<fp <<" RS" << endl;
            }
    }
   
    void getGroceeryStuff()
    {
        cout <<"Sugar: " << sugar << endl;
        cout <<"Rice: " << rice << endl;
        cout <<"florr: " << floor << endl;
        cout <<"Available sugar: " << avail_sugar/1000 <<" KG" << endl;
        cout <<"Available rice: " << avail_rice/1000 << " KG"<<endl;
        cout <<"Available floor: " << avail_floor/1000 <<" KG" << endl;
    }
};
int main()
{
    double sugar;
    double rice;
    double floor;
    cout <<"Enter the Sugar you want: " << endl;
    cin >> sugar;
    cout <<"Press KG for Kilogram Sugar" << endl;
    cout <<"Press Gram for Gram Sugar" << endl;
    string choiceSugar;
    cin >> choiceSugar;
    if(choiceSugar == "KG" || choiceSugar == "Kg" || choiceSugar == "kg")
    {
        sugar = sugar *1000;
    }
    cout <<"Enter the Rice you want: ";
    cin >> rice;
    cout <<"Press KG for Kilogram Rice" << endl;
    cout <<"Press Gram for Gram Rice" << endl;
    string choiceRice;
    cin >> choiceRice;
    if(choiceRice == "KG" || choiceRice == "Kg" || choiceRice == "kg")
    {
        rice = rice *1000;
    }
    cout <<"Enter the Floor you want: ";
    cin >> floor;
    cout <<"Press KG for Kilogram Floor" << endl;
    cout <<"Press Gram for Gram Floor" << endl;
    string choiceFloor;
    cin >> choiceFloor;
    if(choiceFloor == "KG" || choiceFloor == "Kg" || choiceFloor == "kg")
    {
        floor = floor *1000;
    }
    
    
    double sugarPriceInKG = 150;
    double sugarPriceInGram = sugarPriceInKG/1000;
    double totalPriceOfSugar = sugarPriceInGram * sugar;
    double ricePriceInKG = 220;
    double ricePriceInGram = ricePriceInKG / 1000;
    double totalPriceOfRice = ricePriceInGram * rice;
    double floorPriceInKG = 100;
    double floorPriceInGram = floorPriceInKG / 1000;
    double totalPriceOfFloor = floorPriceInGram * floor;
    weightLifter wl;
    wl.setGroceeryStuff(sugar, rice, floor, totalPriceOfSugar, totalPriceOfRice, totalPriceOfFloor);
    wl.getGroceeryStuff();
    
}
