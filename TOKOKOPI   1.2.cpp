#include<stdio>
#include<conio>
#include<ctype>
#include<iostream>

main(){
   char lagi, tgltrx[10], mn[5][2], tp[5][2], *menu[5], *topping[5];
   int a, i, jmltrx, totalhargatrx, jmlbayar, kembalian, mnharga[5], tpharga[5], hargapercup[5];

   mainmenu:
   clrscr();
   cout<<"^^^************************************************^^^"<<endl;
	cout<<"****************** SELAMAT DATANG DI  ****************"<<endl;
   cout<<"-------------+++++    KEDAI  KOPI     +++++-----------"<<endl;
   cout<<"--------------++++     STARGLASS      ++++------------"<<endl;
   cout<<"******************       *****        ****************"<<endl;
   cout<<"------------------------------------------------------"<<endl;
   cout<<"Tanggal Transaksi: ";gets(tgltrx);
   cout<<"Jumlah Pesanan (max 5 cup/trx): ";cin>>jmltrx;
   totalhargatrx = 0;
   //printmenu();
   cout<<"1. COFFEE"<<endl;
   cout<<"\t- Cappucino [CC]"<<endl;
   cout<<"\t- Americano [CA]"<<endl;
   cout<<"\t- Latte [CL]"<<endl;
   cout<<"\t- Vanilla Latte [CV]"<<endl;
   cout<<"2. TEA"<<endl;
   cout<<"\t- Vanilla Tea [VT]"<<endl;
   cout<<"\t- Green Tea [GT]"<<endl;
   cout<<"\t- Thai Tea [TT]"<<endl;
   cout<<"\t- Milk Tea [MT]"<<endl;
   cout<<"3. TOPPING"<<endl;
   cout<<"\t- Cream Cheese [TC]"<<endl;
   cout<<"\t- Extra Shots [SH]"<<endl;
   cout<<"\t- Extra Sugar [SG]"<<endl;
   cout<<"\t- No Topping [NT]"<<endl;
   for(i=1;i<=jmltrx;i++){
   	cout<<endl;
      cout<<"Cup ke-"<<i<<endl;
      //cout<<"Cup Atas Nama: ";cin>>nama[i];
      cout<<"Pilihan Menu Minuman: ";cin>>mn[i];
      if(strcmp(mn[i],"CC")==0){
      	menu[i] = "Cappucino";
         mnharga[i]= 15000;
		}else if(strcmp(mn[i],"CA")==0){
   	   menu[i] = "Americano";
         mnharga[i]= 15000;
		}else if(strcmp(mn[i],"CL")==0){
	      menu[i] = "Latte";
         mnharga[i]= 18000;
		}else if(strcmp(mn[i],"CV")==0){
      	menu[i] = "Vanilla Latte";
         mnharga[i]= 19000;
		}else if(strcmp(mn[i],"VT")==0){
   	   menu[i] = "Vanilla Tea";
         mnharga[i]= 15000;
		}else if(strcmp(mn[i],"GT")==0){
	      menu[i] = "Green Tea";
         mnharga[i]= 17000;
		}else if(strcmp(mn[i],"TT")==0){
   	   menu[i] = "Thai Tea";
         mnharga[i]= 18000;
		}else if(strcmp(mn[i],"MT")==0){
	      menu[i] = "Milk Tea";
         mnharga[i]= 15000;
		}else{
   		menu[i] = "No Menu";
         mnharga[i]= 0;
		}
      cout<<"Pilihan Topping: ";cin>>tp[i];
      if(strcmp(tp[i],"TC")==0){
      	topping[i] = "Cream Cheese";
         tpharga[i]= 8000;
		}else if(strcmp(tp[i],"SH")==0){
   	   topping[i] = "Extra Shots";
         tpharga[i]= 6000;
		}else if(strcmp(tp[i],"SG")==0){
	      topping[i] = "Extra Sugar";
         tpharga[i]= 3000;
		}else if(strcmp(tp[i],"NT")==0){
      	topping[i] = "No Topping";
         tpharga[i]= 0;
		}else{
   		topping[i] = "No Topping";
         tpharga[i]= 0;
		}
      hargapercup[i] = mnharga[i] + tpharga[i];
   }
   clrscr();

   cout<<"********************************************************"<<endl;
   cout<<"|||----------------- :: KEDAI KOPI :: ---------------|||"<<endl;
   cout<<"|||-----------------    STARGLASS     ---------------|||"<<endl;
   cout<<"|||..................................................|||"<<endl;
   cout<<"--------------------------------------------------------"<<endl;
   cout<<"            (-.-)/                       (^-^)        "<<endl;
   cout<<"            <)*)/                        <(*(>        "<<endl;
   cout<<"             | |                          | |         "<<endl;
   cout<<"                 Tanggal: "<<tgltrx<<endl;
   cout<<"**********************************************************"<<endl;
   cout<<"No.        Menu                           Total              "<<endl;
   cout<<"**********************************************************"<<endl;

   ///////1234567890123456789012345678901234567890123456789012345678901234567890
   for(a=1;a<=jmltrx;a++){
   	gotoxy(1, a+12);cout<<a;
      gotoxy(13, a+12);cout<<menu[a]<<" with "<<topping[a];
      gotoxy(43, a+12);cout<<hargapercup[a];
      totalhargatrx = totalhargatrx + hargapercup[a];
   }
   cout<<endl;
   cout<<"**********************************************************"<<endl;
   cout<<"\t\t\tTotal Keseluruhan     : Rp. "<<totalhargatrx<<endl;
   cout<<"\t\t\tUang Bayar            : Rp. ";cin>>jmlbayar;
   kembalian = jmlbayar - totalhargatrx;
   cout<<"\t\t\tUang Kembali          : Rp. "<<kembalian<<endl;
   cout<<"***********************************************************"<<endl;
   cout<<"Ada Transaksi Lagi??[Y/T]: ";cin>>lagi;
   if(toupper(lagi) == 'Y'){
   	goto mainmenu;
   }else{
   	goto goodbye;
   }

   goodbye:
   cout<<"***********************************************************"<<endl;
   cout<<"--------------------   TERIMA  KASIH   --------------------"<<endl;
   cout<<"***********************************************************"<<endl;
   cout<<"           (-.-)/                         (^-^)            "<<endl;
   cout<<"           <)*)/                          <(*(>            "<<endl;
   cout<<"            | |                            | |             "<<endl;

	getch();
}




