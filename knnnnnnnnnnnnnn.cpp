#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

struct students
    {
        char name[30];
        float at1;
        float at2;
        float at3;
        float at4;
        float at5;
        float at6;
        float at7;
        float at8;
        char type[10];
        float distance;
    };

struct students student[11];

int main(){
    
    float dt[10] = {};
    strcpy(student[0].name, "Key");
    strcpy(student[1].name, "Jake");
    strcpy(student[2].name, "Brondy");
    strcpy(student[3].name, "Penny");
    strcpy(student[4].name, "Arthur");
    strcpy(student[5].name, "Kleve");
    strcpy(student[6].name, "Kristy");
    strcpy(student[7].name, "Monrow");
    strcpy(student[8].name, "Evie");
    strcpy(student[9].name, "Victor");
    strcpy(student[10].name, "Sam");
    
    strcpy(student[0].type,"ENFJ");
    strcpy(student[1].type,"ENFP");
    strcpy(student[2].type,"INTP");
    strcpy(student[3].type,"ESTJ");
    strcpy(student[4].type,"ESFJ");
    strcpy(student[5].type,"INFP");
    strcpy(student[6].type,"INTP");
    strcpy(student[7].type,"INTP");
    strcpy(student[8].type,"ISFJ");
    strcpy(student[9].type,"INTP");
    strcpy(student[10].type,"ISTJ");

    student[0].at1, student[0].at2,student[0].at3, student[0].at4,student[0].at5, student[0].at6, student[0].at7, student[0].at8 = 28.2,22,20,30,27,27,27,20;
    student[1].at1, student[1].at2,student[1].at3, student[1].at4,student[1].at5, student[1].at6, student[1].at7, student[1].at8 = 40.2,30,31,30,32,36,37,40;
    student[2].at1, student[2].at2,student[2].at3, student[2].at4,student[2].at5, student[2].at6, student[2].at7, student[2].at8 = 41.6,36.6,25,18,27,32,32,40;
    student[3].at1, student[3].at2,student[3].at3, student[3].at4,student[3].at5, student[3].at6, student[3].at7, student[3].at8 = 26,25,24,36,33,33,26,21;
    student[4].at1, student[4].at2,student[4].at3, student[4].at4,student[4].at5, student[4].at6, student[4].at7, student[4].at8 = 37.4,31.427,38,22,30,43,28;
    student[5].at1, student[5].at2,student[5].at3, student[5].at4,student[5].at5, student[5].at6, student[5].at7, student[5].at8 = 28.4,31.2,18,25,21,24,22,18;
    student[6].at1, student[6].at2,student[6].at3, student[6].at4,student[6].at5, student[6].at6, student[6].at7, student[6].at8 = 39.4,34,26,24,30,37,30,32;
    student[7].at1, student[7].at2,student[7].at3, student[7].at4,student[7].at5, student[7].at6, student[7].at7, student[7].at8 = 29.6,28.6,27,23,28,27,23,30;
    student[8].at1, student[8].at2,student[8].at3, student[8].at4,student[8].at5, student[8].at6, student[8].at7, student[8].at8 = 25,25,21,27,21,27,23,24;
    student[9].at1, student[9].at2,student[9].at3, student[9].at4,student[9].at5, student[9].at6, student[9].at7, student[9].at8 = 24.8,21.8,27,35,2836,27,22;

    student[10].at1, student[10].at2, student[10].at3, student[10].at4, student[10].at5, student[10].at6, student[10].at7, student[10].at8 = 35,27.8,27,40,39,38,41,33;
    
    for(int i = 0; i<10; i++){
        student[i].distance = sqrt(pow((student[i].at1-student[10].at1), 2)+ pow((student[i].at2-student[10].at2), 2)+ pow((student[i].at3-student[10].at3), 2)+
                                   pow((student[i].at4-student[10].at4), 2)+ pow((student[i].at5-student[10].at5), 2)+ pow((student[i].at6-student[10].at6), 2)+
                                   pow((student[i].at7-student[10].at7), 2)+ pow((student[i].at8-student[10].at8), 2));
        dt[i] = student[i].distance;
    }
    
    float min1 = 1000;
    float min2 = 1000;
    float min3 = 1000;
    float min4 = 1000;
    float min5 = 1000;
    int index_min1, index_min2, index_min3, index_min4, index_min5 = 0;
    
    char Type1[6], Type2[6], Type3[6], Type4[6];
    
    string myType = "";
    char char_max;
    
    for(int i = 0; i < 10; i++){
        
        if(dt[i] < min1){
            min1 = dt[0];
            dt[0] = dt[i];
            index_min1 = i;
        }
    }
    
    for(int i = 0; i < 10; i++){
        
        if(dt[i] < min2 and dt[i] != min1){
            min2 = dt[i];
            index_min2 = i;
        }
    }
    
    for(int i = 0; i < 10; i++){
        
        if(dt[i] < min3 and dt[i] != min1 and dt[i] != min2){
            min3 = dt[i];
            index_min3 = i;
        }
    }
    
    for(int i = 0; i < 10; i++){
        
        if(dt[i] < min4 and dt[i] != min1 and dt[i] != min2 and dt[i] != min3){
            min4 = dt[i];
            index_min4 = i;
        }
    }
    
    for(int i = 0; i < 10; i++){
        
        if(dt[i] < min5 and dt[i] != min1 and dt[i] != min2 and dt[i] != min3 and dt[i] != min4){
            min5 = dt[i];
            index_min5 = i;
        }
    }
    cout<< index_min1 <<endl;
    cout<< ".\n.\n.\n"<< endl;
    
    cout<< student[index_min1].name<< " is "<< min1<<  " away from me. "<< endl;
    cout<< student[index_min2].name<< " is "<< min2<<  " away from me. "<< endl;
    cout<< student[index_min3].name<< " is "<< min3<<  " away from me. "<< endl;
    cout<< student[index_min4].name<< " is "<< min4<<  " away from me. "<< endl;
    cout<< student[index_min5].name<< " is "<< min5<<  " away from me. "<< endl;
    cout<< "----------------------------------------\n"<< endl;
    
    cout<< student[index_min1].name<< " has type "<< student[index_min1].type<< " "<< endl;
    cout<< student[index_min2].name<< " has type "<< student[index_min2].type<< " "<< endl;
    cout<< student[index_min3].name<< " has type "<< student[index_min3].type<< " "<< endl;
    cout<< student[index_min4].name<< " has type "<< student[index_min4].type<< " "<< endl;
    cout<< student[index_min5].name<< " has type "<< student[index_min5].type<< " "<< endl;
    cout<< "----------------------------------------\n"<< endl;

    Type1[0] = student[index_min1].type[0];
    Type1[1] = student[index_min2].type[0];
    Type1[2] = student[index_min3].type[0];
    Type1[3] = student[index_min4].type[0];
    Type1[4] = student[index_min5].type[0];
    size_t arraysize1 = sizeof(Type1)/sizeof(*Type1);
    std::sort(Type1, Type1+arraysize1);
    myType += Type1[3];

    Type2[0] = student[index_min1].type[1];
    Type2[1] = student[index_min2].type[1];
    Type2[2] = student[index_min3].type[1];
    Type2[3] = student[index_min4].type[1];
    Type2[4] = student[index_min5].type[1];
    size_t arraysize2 = sizeof(Type2)/sizeof(*Type2);
    std::sort(Type2, Type2+arraysize2);
    myType += Type2[3];

    Type3[0] = student[index_min1].type[2];
    Type3[1] = student[index_min2].type[2];
    Type3[2] = student[index_min3].type[2];
    Type3[3] = student[index_min4].type[2];
    Type3[4] = student[index_min5].type[2];
    size_t arraysize3 = sizeof(Type3)/sizeof(*Type3);
    std::sort(Type3, Type3+arraysize3);
    myType += Type3[3];

    Type4[0] = student[index_min1].type[3];
    Type4[1] = student[index_min2].type[3];
    Type4[2] = student[index_min3].type[3];
    Type4[3] = student[index_min4].type[3];
    Type4[4] = student[index_min5].type[3];
    size_t arraysize4 = sizeof(Type4)/sizeof(*Type4);
    std::sort(Type4, Type4+arraysize4);
    myType += Type4[3];
    
   cout << "My type should be " << myType << endl;
   cout << "My real type is " << student[10].type << endl;
}
