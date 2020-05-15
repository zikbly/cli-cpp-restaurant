#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int mainMealNumber;
int totalAmount=0;





class Meals{            //Create meals class
    public:
      int quantityCurrent=0;
      int price;
      string name;
};







//create meals objects from meals class

Meals oats;
Meals wheat;
Meals porridge;
Meals cornFlakes;
Meals friedRice;
Meals jollofRice;
Meals plainRice;
Meals beefSauce;
Meals spaghetti;
Meals salad;
Meals waakye;
Meals kelewele;

int cartArray[12]={oats.quantityCurrent,wheat.quantityCurrent,porridge.quantityCurrent,cornFlakes.quantityCurrent,friedRice.quantityCurrent,jollofRice.quantityCurrent,plainRice.quantityCurrent,beefSauce.quantityCurrent,spaghetti.quantityCurrent,salad.quantityCurrent,waakye.quantityCurrent,kelewele.quantityCurrent};
int cartQuantity=0;
void updateCartQuantity(){
 cartQuantity=oats.quantityCurrent+wheat.quantityCurrent+porridge.quantityCurrent+cornFlakes.quantityCurrent+friedRice.quantityCurrent+jollofRice.quantityCurrent+plainRice.quantityCurrent+beefSauce.quantityCurrent+spaghetti.quantityCurrent+salad.quantityCurrent+waakye.quantityCurrent+kelewele.quantityCurrent;
}





void displayCart();        //Declare cart function
void displaySubMenu();    //Declare sub-menu function




void displayMenu(){       //Declare Main Menu function
  string mainMealArray[5] = {" Welcome to Sally's Eatery"," [1] Breakfast"," [2] Lunch"," [3] Dinner"," [4] View Cart & Checkout"};
  for(int i=0; i<5; i++){              //Display main menu list
    if (i==0){
      cout << "\n";
    }
    cout << mainMealArray[i] << "\n";
    if (i==0){
      cout << "\n";
    }
  }
  cout << "\n" << " Please enter the number for the type of meal you want to order or enter 4 to checkout: "; //Request user option
  cin >> mainMealNumber;
  if(mainMealNumber > 4 || mainMealNumber!=int(mainMealNumber)){       //Check if user input is a valid
    cout << "\n" << "Invalid input. Enter 1, 2, 3 or 4." << "\n" << "\n";
    system("PAUSE");
    system("CLS");
    displayMenu();
  }
  else if(mainMealNumber==1||mainMealNumber==2||mainMealNumber==3){
    system("CLS");
    displaySubMenu();
  }else if(mainMealNumber==4){
    if(cartQuantity<=0){
      cout << "\n" << " Your cart is empty. Enter 1, 2 or 3 to add items to your cart." << "\n" << "\n";
      system("PAUSE");
      system("CLS");
      displayMenu();
    }else{
    system("CLS");
    displayCart();
    }
  }
}






void displaySubMenu(){        //Define sub-menu function
  switch(mainMealNumber){

    //display breakfast meals

    case 1:{
      oats.name=" [1] Oats";
      oats.price=4;
      wheat.name=" [2] Wheat";
      wheat.price=5;
      porridge.name=" [3] Porridge";
      porridge.price=5;
      cornFlakes.name=" [4] Corn Flakes";
      cornFlakes.price=10;
      int breakfastMealsPrices[4]={oats.price,wheat.price,porridge.price,cornFlakes.price};
      string breakfastMealsNames[4]={oats.name,wheat.name,porridge.name,cornFlakes.name};
      string subMealArray[4];
      for(int i=0; i<4; i++){
        subMealArray[i]=breakfastMealsNames[i];
        if(i==0){
         cout << "\n";
        }
        if(i==0 || i==1 || i==2){
         cout << subMealArray[i] << "\t" << "\t" << "\t" << "- GHC" << breakfastMealsPrices[i] << "\n";
        }else{
         cout << subMealArray[i] << "\t" << "\t" << "- GHC" << breakfastMealsPrices[i] << "\n";
        }
      }
      cout << " [5] View Cart & Checkout" << "\n";
      cout << " [6] Main Menu" << "\n" << "\n";
      cout << " Please enter the number for the breakfast meal you prefer." << "\n" << " Or enter 5 to checkout, and 6 to go to the Main Menu: ";
      int subMealNumber;
      cin >> subMealNumber;
        switch(subMealNumber){
         case 1:
           int oatsQuantity;
           cout << "\n" << " Please enter the package quantity of Oats you want: ";
           cin >> oatsQuantity;
           oats.quantityCurrent+=oatsQuantity;
           updateCartQuantity();
           cout << "\n" << " Cart successfully updated." << "\n" << "\n";
           system("PAUSE");
           system("CLS");
           displaySubMenu();
          case 2:
           int wheatQuantity;
           cout << "\n" << " Please enter the package quantity of Wheat you want: ";
           cin >> wheatQuantity;
           wheat.quantityCurrent+=wheatQuantity;
           updateCartQuantity();
           cout << "\n" << " Cart successfully updated." << "\n" << "\n";
           system("PAUSE");
           system("CLS");
           displaySubMenu();
          case 3:
           int porridgeQuantity;
           cout << "\n" << " Please enter the package quantity of Porridge you want: ";
           cin >> porridgeQuantity;
           porridge.quantityCurrent+=porridgeQuantity;
           updateCartQuantity();
           cout << "\n" << " Cart successfully updated." << "\n" << "\n";
           system("PAUSE");
           system("CLS");
           displaySubMenu();
          case 4:
           int cornFlakesQuantity;
           cout << "\n" << " Please enter the package quantity of Corn Flakes you want: ";
           cin >> cornFlakesQuantity;
           cornFlakes.quantityCurrent+=cornFlakesQuantity;
           updateCartQuantity();
           cout << "\n" << " Cart successfully updated." << "\n" << "\n";
           system("PAUSE");
           system("CLS");
           displaySubMenu();
          case 5:
          if(cartQuantity<=0){
           cout << "\n" << " Your cart is empty. Enter 1, 2, 3 or 4 to add items to your cart." << "\n" << "\n";
           system("PAUSE");
           system("CLS");
           displaySubMenu();
          }else{
            system("CLS");
            displayCart();
          }
          case 6:
            system("CLS");
            displayMenu();
          default:
           cout << "\n" << " Invalid input. Please enter 1, 2, 3, 4, 5 or 6" << "\n" << "\n";
           system("PAUSE");
           system("CLS");
           displaySubMenu();
        }
    }

      //display lunch meals

    case 2:{
      friedRice.name=" [1] Fried Rice";
      friedRice.price=15;
      jollofRice.name=" [2] Jollof Rice";
      jollofRice.price=15;
      plainRice.name=" [3] Plain Rice";
      plainRice.price=10;
      beefSauce.name=" [4] Beef Sauce";
      beefSauce.price=25;
      int lunchMealsPrices[4]={friedRice.price,jollofRice.price,plainRice.price,beefSauce.price};
      string lunchMealsNames[4]={friedRice.name,jollofRice.name,plainRice.name,beefSauce.name};
      string subMealArray[4];
      for(int i=0; i<4; i++){
        subMealArray[i]=lunchMealsNames[i];
        if(i==0){
         cout << "\n";
        }
         if(i==1){
          cout << subMealArray[i] << "\t" << "\t" << "- GHC" << lunchMealsPrices[i] << "\n";
         }else{
           cout << subMealArray[i] << "\t" << "\t" << "\t" << "- GHC" << lunchMealsPrices[i] << "\n";
         }
      }
      cout << " [5] View Cart & Checkout" << "\n";
      cout << " [6] Main Menu" << "\n" << "\n";
      cout << " Please enter the number for the lunch meal you prefer." << "\n" << " Or enter 5 to checkout, and 6 to go to the Main Menu: ";
      int subMealNumber;
      cin >> subMealNumber;
        switch(subMealNumber){
         case 1:
           int friedRiceQuantity;
           cout << "\n" << " Please enter the package quantity of Fried Rice you want: ";
           cin >> friedRiceQuantity;
           friedRice.quantityCurrent+=friedRiceQuantity;
           updateCartQuantity();
           cout << "\n" << " Cart successfully updated." << "\n" << "\n";
           system("PAUSE");
           system("CLS");
           displaySubMenu();
          case 2:
           int jollofRiceQuantity;
           cout << "\n" << " Please enter the package quantity of Jollof Rice you want: ";
           cin >> jollofRiceQuantity;
           jollofRice.quantityCurrent+=jollofRiceQuantity;
           updateCartQuantity();
           cout << "\n" << " Cart successfully updated." << "\n" << "\n";
           system("PAUSE");
           system("CLS");
           displaySubMenu();
          case 3:
           int plainRiceQuantity;
           updateCartQuantity();
           cout << "\n" << " Please enter the package quantity of Plain Rice you want: ";
           cin >> plainRiceQuantity;
           plainRice.quantityCurrent+=plainRiceQuantity;
           cout << "\n" << " Cart successfully updated." << "\n" << "\n";
           system("PAUSE");
           system("CLS");
           displaySubMenu();
          case 4:
           int beefSauceQuantity;
           cout << "\n" << " Please enter the package quantity of Beef Sauce you want: ";
           cin >> beefSauceQuantity;
           updateCartQuantity();
           beefSauce.quantityCurrent+=beefSauceQuantity;
           cout << "\n" << " Cart successfully updated." << "\n" << "\n";
           system("PAUSE");
           system("CLS");
           displaySubMenu();
          case 5:
           if(cartQuantity<=0){
            cout << "\n" << " Your cart is empty. Enter 1, 2, 3 or 4 to add items to your cart." << "\n" << "\n";
            system("PAUSE");
            system("CLS");
            displaySubMenu();
          }else{
            system("CLS");
            displayCart();
          }
          case 6:
            system("CLS");
            displayMenu();
          default:
           cout << "\n" << " Invalid input. Please enter 1, 2, 3, 4, 5 or 6" << "\n" << "\n";
           system("PAUSE");
           system("CLS");
           displaySubMenu();
        }
    }

      //display dinner meals

      case 3:{
      spaghetti.name=" [1] Spaghetti";
      spaghetti.price=10;
      salad.name=" [2] Salad";
      salad.price=15;
      waakye.name=" [3] Waakye";
      waakye.price=7;
      kelewele.name=" [4] Kelewele";
      kelewele.price=5;
      int dinnerMealsPrices[4]={spaghetti.price,salad.price,waakye.price, kelewele.price};
      string dinnerMealsNames[4]={spaghetti.name,salad.name,waakye.name,kelewele.name};
      string subMealArray[4];
      for(int i=0; i<4; i++){
        subMealArray[i]=dinnerMealsNames[i];
        if(i==0){
         cout << "\n";
        }
        cout << subMealArray[i] << "\t" << "\t" << "\t" << "- GHC" << dinnerMealsPrices[i] << "\n";
      }
      cout << " [5] View Cart & Checkout" << "\n";
      cout << " [6] Main Menu" << "\n" << "\n";
      cout << " Please enter the number for the dinner meal you prefer." << "\n" << " Or enter 5 to checkout, and 6 to go to the Main Menu: ";
      int subMealNumber;
      cin >> subMealNumber;
        switch(subMealNumber){
         case 1:
           int spaghettiQuantity;
           cout << "\n" << " Please enter the package quantity of Spaghetti you want: ";
           cin >> spaghettiQuantity;
           spaghetti.quantityCurrent+=spaghettiQuantity;
           updateCartQuantity();
           cout << "\n" << " Cart successfully updated." << "\n" << "\n";
           system("PAUSE");
           system("CLS");
           displaySubMenu();
          case 2:
           int saladQuantity;
           cout << "\n" << " Please enter the package quantity of Salad you want: ";
           cin >> saladQuantity;
           salad.quantityCurrent+=saladQuantity;
           updateCartQuantity();
           cout << "\n" << " Cart successfully updated." << "\n" << "\n";
           system("PAUSE");
           system("CLS");
           displaySubMenu();
          case 3:
           int waakyeQuantity;
           cout << "\n" << " Please enter the package quantity of Waakye you want: ";
           cin >> waakyeQuantity;
           waakye.quantityCurrent+=waakyeQuantity;
           updateCartQuantity();
           cout << "\n" << " Cart successfully updated." << "\n" << "\n";
           system("PAUSE");
           system("CLS");
           displaySubMenu();
          case 4:
           int keleweleQuantity;
           cout << "\n" << " Please enter the package quantity of Kelewele you want: ";
           cin >> keleweleQuantity;
           kelewele.quantityCurrent+=keleweleQuantity;
           updateCartQuantity();
           cout << "\n" << " Cart successfully updated." << "\n" << "\n";
           system("PAUSE");
           system("CLS");
           displaySubMenu();
          case 5:
           if(cartQuantity<=0){
            cout << "\n" << " Your cart is empty. Enter 1, 2, 3 or 4 to add items to your cart." << "\n" << "\n";
            system("PAUSE");
            system("CLS");
            displaySubMenu();
          }else{
            system("CLS");
            displayCart();
          }
          case 6:
            system("CLS");
            displayMenu();
          default:
           cout << "\n" << " Invalid input. Please enter 1, 2, 3, 4, 5 or 6" << "\n" << "\n";
           system("PAUSE");
           system("CLS");
           displaySubMenu();
        }
     }
  }
}







//Define displayCart function

void displayCart(){
  int cartArray[12]={oats.quantityCurrent,wheat.quantityCurrent,porridge.quantityCurrent,cornFlakes.quantityCurrent,friedRice.quantityCurrent,jollofRice.quantityCurrent,plainRice.quantityCurrent,beefSauce.quantityCurrent,spaghetti.quantityCurrent,salad.quantityCurrent,waakye.quantityCurrent,kelewele.quantityCurrent};
  int increment=0;
  for(int i=0; i<12; i++){
   if(cartArray[i] > 0 && i==0){
      totalAmount+=oats.quantityCurrent*oats.price;
      string oatsName=oats.name;
      increment++;
      string incrementStr=to_string(increment);
      oatsName.replace(2,1,incrementStr);
      oats.name=oatsName;
      cout << "\n" << oats.name << "\t\t\t Quantity => " << oats.quantityCurrent << "\t\t Price => GHC" << oats.price << "\t\t Subtotal => GHC" << oats.quantityCurrent*oats.price;
    }
   else if(cartArray[i] > 0 && i==1){
      totalAmount+=wheat.quantityCurrent*wheat.price;
      string wheatName=wheat.name;
      increment++;
      string incrementStr=to_string(increment);
      wheatName.replace(2,1,incrementStr);
      wheat.name=wheatName;
      cout << "\n" << wheat.name << "\t\t\t Quantity => " << wheat.quantityCurrent << "\t\t Price => GHC" << wheat.price << "\t\t Subtotal => GHC" << wheat.quantityCurrent*wheat.price;
  }
   else if(cartArray[i] > 0 && i==2){
      totalAmount+=porridge.quantityCurrent*porridge.price;
      string porridgeName=porridge.name;
      increment++;
      string incrementStr=to_string(increment);
      porridgeName.replace(2,1,incrementStr);
      porridge.name=porridgeName;
      cout << "\n" << porridge.name << "\t\t\t Quantity => " << porridge.quantityCurrent << "\t\t Price => GHC" << porridge.price << "\t\t Subtotal => GHC" << porridge.quantityCurrent*porridge.price;
  }
   else if(cartArray[i] > 0 && i==3){
      totalAmount+=cornFlakes.quantityCurrent*cornFlakes.price;
      string cornFlakesName=cornFlakes.name;
      increment++;
      string incrementStr=to_string(increment);
      cornFlakesName.replace(2,1,incrementStr);
      cornFlakes.name=cornFlakesName;
      cout << "\n" << cornFlakes.name << "\t\t Quantity => " << cornFlakes.quantityCurrent << "\t\t Price => GHC" << cornFlakes.price << "\t\t Subtotal => GHC" << cornFlakes.quantityCurrent*cornFlakes.price;
  }
   else if(cartArray[i] > 0 && i==4){
      totalAmount+=friedRice.quantityCurrent*friedRice.price;
      string friedRiceName=friedRice.name;
      increment++;
      string incrementStr=to_string(increment);
      friedRiceName.replace(2,1,incrementStr);
      friedRice.name=friedRiceName;
      cout << "\n" << friedRice.name << "\t\t\t Quantity => " << friedRice.quantityCurrent << "\t\t Price => GHC" << friedRice.price << "\t\t Subtotal => GHC" << friedRice.quantityCurrent*friedRice.price;
  }
   else if(cartArray[i] > 0 && i==5){
      totalAmount+=jollofRice.quantityCurrent*jollofRice.price;
      string jollofRiceName=jollofRice.name;
      increment++;
      string incrementStr=to_string(increment);
      jollofRiceName.replace(2,1,incrementStr);
      jollofRice.name=jollofRiceName;
      cout << "\n" << jollofRice.name << "\t\t Quantity => " << jollofRice.quantityCurrent << "\t\t Price => GHC" << jollofRice.price << "\t\t Subtotal => GHC" << jollofRice.quantityCurrent*jollofRice.price;
  }
   else if(cartArray[i] > 0 && i==6){
      totalAmount+=plainRice.quantityCurrent*plainRice.price;
      string plainRiceName=plainRice.name;
      increment++;
      string incrementStr=to_string(increment);
      plainRiceName.replace(2,1,incrementStr);
      plainRice.name=plainRiceName;
      cout << "\n" << plainRice.name << "\t\t\t Quantity => " << plainRice.quantityCurrent << "\t\t Price => GHC" << plainRice.price << "\t\t Subtotal => GHC" << plainRice.quantityCurrent*plainRice.price;
  }
   else if(cartArray[i] > 0 && i==7){
      totalAmount+=beefSauce.quantityCurrent*beefSauce.price;
      string beefSauceName=beefSauce.name;
      increment++;
      string incrementStr=to_string(increment);
      beefSauceName.replace(2,1,incrementStr);
      beefSauce.name=beefSauceName;
      cout << "\n" << beefSauce.name << "\t\t\t Quantity => " << beefSauce.quantityCurrent << "\t\t Price => GHC" << beefSauce.price << "\t\t Subtotal => GHC" << beefSauce.quantityCurrent*beefSauce.price;
  }
   else if(cartArray[i] > 0 && i==8){
      totalAmount+=spaghetti.quantityCurrent*spaghetti.price;
      string spaghettiName=spaghetti.name;
      increment++;
      string incrementStr=to_string(increment);
      spaghettiName.replace(2,1,incrementStr);
      spaghetti.name=spaghettiName;
      cout << "\n" << spaghetti.name << "\t\t\t Quantity => " << spaghetti.quantityCurrent << "\t\t Price => GHC" << spaghetti.price << "\t\t Subtotal => GHC" << spaghetti.quantityCurrent*spaghetti.price;
  }
   else if(cartArray[i] > 0 && i==9){
      totalAmount+=salad.quantityCurrent*salad.price;
      string saladName=salad.name;
      increment++;
      string incrementStr=to_string(increment);
      saladName.replace(2,1,incrementStr);
      salad.name=saladName;
      cout << "\n" << salad.name << "\t\t\t Quantity => " << salad.quantityCurrent << "\t\t Price => GHC" << salad.price << "\t\t Subtotal => GHC" << salad.quantityCurrent*salad.price;
  }
   else if(cartArray[i] > 0 && i==10){
      totalAmount+=waakye.quantityCurrent*waakye.price;
      string waakyeName=waakye.name;
      increment++;
      string incrementStr=to_string(increment);
      waakyeName.replace(2,1,incrementStr);
      waakye.name=waakyeName;
      cout << "\n" << waakye.name << "\t\t\t Quantity => " << waakye.quantityCurrent << "\t\t Price => GHC" << waakye.price << "\t\t Subtotal => GHC" << waakye.quantityCurrent*waakye.price;
  }
   else if(cartArray[i] > 0 && i==11){
      totalAmount+=kelewele.quantityCurrent*kelewele.price;
      string keleweleName=kelewele.name;
      increment++;
      string incrementStr=to_string(increment);
      keleweleName.replace(2,1,incrementStr);
      kelewele.name=keleweleName;
      cout << "\n" << kelewele.name << "\t\t\t Quantity => " << kelewele.quantityCurrent << "\t\t Price => GHC" << kelewele.price << "\t\t Subtotal => GHC" << kelewele.quantityCurrent*kelewele.price;
  }
 }
  cout << "\n\n \t\t\t\t\t\t\t\t\t\t Total Amount Due = GHC" << totalAmount << "\n\n";
  cout << " [ 1] Main Menu \n [ 2] Exit Restaurant";
  int option;
  cout << "\n\n Enter option: ";
  cin >> option;
  switch(option){
   case 1:
    totalAmount=0;
    salad.name=" [2] Salad";
    waakye.name=" [3] Waakye";
    kelewele.name=" [4] Kelewele";
    system("CLS");
    displayMenu();
   case 2:
    cout << "\n Bon Appetit! \n\n";
    system("PAUSE");
    exit(0);
   default:
    cout << "\n Invalid input. Enter 1 or 2 \n\n";
     totalAmount=0;
     salad.name=" [2] Salad";
     waakye.name=" [3] Waakye";
     kelewele.name=" [4] Kelewele";
     system("PAUSE");
     system("CLS");
     displayCart();
  }
}





int main(){
    displayMenu();
    return 0;
}


