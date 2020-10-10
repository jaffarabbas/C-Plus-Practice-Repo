#include <iostream>
#include <bits/stdc++.h> 
#include "darklord.cpp"
using namespace std;

class accounts{
    private: string name;
    private: int price;
    private: int product_quantity;
    private: float total;
    private: float tax;

    public: float Tax_Machine(float tax){
        float calcuate = tax/100;
        return calcuate;
    }
    
    public:float calculate_Tax(string name,int price,int product_quantity,float taxs){
        int price_total_for_tax = price * product_quantity;
        if(price_total_for_tax == 400){
            total = price_total_for_tax * taxs;
        }else{
            total = price_total_for_tax;
        }
        setTotal(total);
        return getTotal();
    }

    public:accounts(){
        cout << "TAX CALCULATER : " << endl;
        cout << "NAME : " << endl;
        setName(strscn());
        cout << "PRICE : " << endl;
        setPrice(inscn());
        cout << "QUANTITY : " << endl;
        setProduct_Quantity(inscn());
        cout << "TAX : " << endl;
        setTax(flscn());
        cout << calculate_Tax(getName(), getPrice(),getProduct_Quantity(), getTax()); ;
    }

    public:
          string setName(string str){
              name = str;
          }
          string getName() { return name; }

          int setPrice(int price){
              price = price;
          }
          int getPrice() { return price; }

          int setProduct_Quantity(int product){
              product_quantity = product;
          }
          int getProduct_Quantity() { return product_quantity; }

          float setTotal(int total){
              total = total;
          }
          float getTotal() { return total; }

          float setTax(float tax){
              tax = tax;
          }
          float getTax() {return tax;}
};


int main(int argc, char const *argv[])
{
    accounts account_1; 
    return 0;
}
