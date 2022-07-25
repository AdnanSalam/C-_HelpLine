#include <iostream>
#include <string.h>
using namespace std;
int main()
{




    int a,d,e,f,g,i;

    cout<<"************************************* Welcome to It Gets Better! *************************************"<<endl;
    cout<<endl;
    cout<<"For any emergency call 999 anytime, anywhere from Bangladesh! ";
    cout<<endl<<endl;

    for(;;)
    {

    cout<<"How are you doing today? "<<endl;
    cout<<"1. I'm feeling really bad! "<<endl;
    cout<<"2. I'm not feeling good. "<<endl;
    cout<<"3. I want to help. "<<endl;
    cout<<"4. I want to know more about It Gets Better. "<<endl;
    cout<<"5. Exit "<<endl;
    cout<<"Please choose one: ";

    cin>>a;



        //case 1:

        if(a==1)
        {

            for(;;)
            {
                cout<<"How are you feeling? "<<endl<<endl;
                cout<<"1. Depressed! "<<endl;
                cout<<"2. Anxious! "<<endl;
                cout<<"3. I'm going to have a panic attack! "<<endl;
                cout<<"4. I'm don't want to live anymore! "<<endl;
                cout<<"5. return to main menu "<<endl;
                cout<<"Please choose one: ";
                cin>>d;
                cout<<endl;



                //{
                    if(d==1) cout<<"Out of suffering have emerged the strongest souls. - Khalil Gibran "<<endl<<endl;
                    else if (d==2) cout<<"I can't change the direction of the wind, but I can always adjust my sails to reach my destination. - Jimmy Dean"<<endl<<endl;
                    else if (d==3) cout<<"The best way out is always through! - Robert Frost"<<endl<<endl;
                    else if(d==4){cout<<"Anyone desperate enough for suicide should be desperate enough to go to creative extremes to solve problems: elope at midnight, stow away on the boat to New Zealand and start over, do what they always wanted to do but were afraid to try. – Richard Bach"<<endl<<endl;
                                  /*cout<<endl;*/}
                    else if(d==5)
                    {
                        break;
                    }
                    else
                        {
                            cout<<"Wrong input! Please choose one from the list. ";
                            continue;
                        }
                //}
            }
        }

        else if(a==2){
                for(;;){
        cout<<"How are you feeling? "<<endl<<endl;
                cout<<"1. Lonely "<<endl;
                cout<<"2. It hurts "<<endl;
                cout<<"3. Angry "<<endl;
                cout<<"4. Helpless "<<endl;
                cout<<"5. Press 5 to get back to main menu. "<<endl;
                cout<<endl;
                cin>>e;
                cout<<endl;


                //switch (e)
                {
                    if(e==1) cout<<"When the others were picked up and walked home by friends or fathers or best friend’s sisters,I was the kid in a grey hoodie, walking with the poets, the singers, the thinkers, and I was not alone. ― Charlotte Eriksson  "<<endl<<endl;
                    else if(e==2) cout<<"The best characters are seared with scars. - Khalil Gibran"<<endl<<endl;
                    else if(e==3) cout<<"Don't get angry quickly - be kind, be forgiving, be patient. - Patricia Meyers"<<endl<<endl;
                    else if(e==4) cout<<"Never never never give up. – Winston Churchill "<<endl<<endl;
                    else if(e==5) {break;}
                    else  {cout<<"Please choose one from the list. "<<endl<<endl;continue;}
                }
        }
        }
      //case 3:
      else if (a==3)
      {
for(;;){

           cout<<"Great to hear that! How do you want to help? "<<endl<<endl;
                cout<<"1. I want to volunteer. "<<endl;
                cout<<"2. I want to donate "<<endl;
                cout<<"3. Press 3 to to get back to main menu. "<<endl;
                cout<<endl;
                cout<<"Please choose one: ";
                cout<<endl<<endl;
                cin>>f;
                cout<<endl;


                //switch (f)
                {
                    if(f==1) cout<<"Not all heroes wear capes! Thank you! Contact us to get started. "<<endl<<endl;
                    else if(f==2) cout<<"Thank you! Every little bit helps. Contact us to donate. "<<endl<<endl;
                    else if(f==3) {break;}

                    else cout<<"Please choose one from the list. "<<endl<<endl;
                }
      }}
      else if(a==4){
            for(;;){
            cout<<"Please let us know what you want to know. "<<endl<<endl;
                cout<<"1. History "<<endl;
                cout<<"2. Achievements "<<endl;

                cout<<"3. Press 3 to get back to main menu. "<<endl;
                cout<<"Please choose one: ";
                cout<<endl<<endl;
                cin>>g;
                cout<<endl;



                {
                     if (g==1)cout<<"History";
                    else if (g==2) {cout<<"Achievements ";
                    cout<<endl;}
                    else if(g==3) break;
                    else cout<<"Please choose one from the list. ";
                }}}

            //}
            else if(a==5)
            {
                break;
            }
        else {
            cout<<"Please choose one from the list. ";}
    }


cout<<endl;
cout<<endl<<"For any emergency call 999 anytime, anywhere from Bangladesh! "<<endl<<endl;
cout<<"Thank you for visiting us. Feel free to come back anytime and let others know too. Have a good day and a great life! ";
cout<<endl<<endl;
    return 0;
}

