#include <iostream>
#include <string>
using namespace std;

struct lecturer{
    string name;
    string gender;
};

struct lesson{
    string subject;
    string day;
    string time;
    string SKS;
    float final_score;
};

struct sem{
    string semester;
    lesson lesson_1;
    lesson lesson_2;
    lesson lesson_3;
    lesson lesson_4;
    lesson lesson_5;
    lesson lesson_6;
};

struct major{
    sem sem_1;
    sem sem_2;

    lecturer lecturer_1;
    lecturer lecturer_2;
    lecturer lecturer_3;
    lecturer lecturer_4;
    lecturer lecturer_5;
    lecturer lecturer_6;
    lecturer lecturer_7;
    lecturer lecturer_8;
    lecturer lecturer_9;
};

int main(){
    int smt;
    float A = 4.00;
    float A_min = 3.66;
    float B_plus = 3.33;
    float B = 3.00;
    float B_min = 3.33;
    float C_plus = 2.33;
    float C = 2.00;
    float C_min = 1.66;
    float D_plus = 1.33;
    float D = 1.00;
    float D_min = 0.66;
    float E_plus = 0.33;
    float E = 0.00;
    string gen1 = "Male";
    string gen2 = "Female";
    string tim1 = "10:30 - 13:00 (WIB)";
    string tim2 = "14:30 - 17:00 (WIB)";
    string tim3 = "07:30 - 12:30 (WIB)";
    string tim4 = "07:30 - 10:00 (WIB)";
    string tim5 = "12:30 - 17:00 (WIB)";
    string sks1 = "3 SKS";
    string sks2 = "6 SKS";
    string day1 = "Monday";
    string day2 = "Tuesday";
    string day3 = "Wednesday";
    string day4 = "Thursday";
    string day5 = "Friday";

    major maj1;
    lecturer lec1, lec2, lec3, lec4, lec5, lec6, lec7, lec8, lec9;
    sem sem1, sem2;
    lesson les1, les2, les3, les4, les5, les6, les7, les8, les9, les10, les11;

    //lecturer input
    lec1.name = "Dr.-Ing. Erwin Parasian Sitompul, ST, M.Sc.";
    lec1.gender = gen1;
    maj1.lecturer_1 = lec1;

    lec2.name = "Drs. Antonius Suhartomo, M.Eng.Sc., MM, Ph.D.";
    lec2.gender = gen1;
    maj1.lecturer_2 = lec2;

    lec3.name = "Joni Welman Simatupang, ST, M.Sc.Eng., Ph.D.";
    lec3.gender = gen1;
    maj1.lecturer_3 = lec3;

    lec4.name = "Hendra J. Tarigan, BS, MS, Ph.D.";
    lec4.gender = gen1;
    maj1.lecturer_4 = lec4;

    lec5.name = "Iksan Bukhori, S.T., M.Phil.";
    lec5.gender = gen1;
    maj1.lecturer_5 = lec5;

    lec6.name = "Dr. Muhammad Safiq, SE, MSi, Ak, CA";
    lec6.gender = gen1;
    maj1.lecturer_6 = lec6;

    lec7.name = "Mia Galina, S.T., M.T.";
    lec7.gender = gen2;
    maj1.lecturer_7 = lec7;

    lec8.name = "Dr.Eng. Herman MS";
    lec8.gender = gen1;
    maj1.lecturer_8 = lec8;

    lec9.name = "Peri Turnip";
    lec9.gender = gen1;
    maj1.lecturer_9 = lec9;

    //semester input
    sem1.semester = "20201";
    maj1.sem_1 = sem1;
    sem2.semester = "20202";
    maj1.sem_2 = sem2;

    //lesson
    les1.subject = "Emotional Intelligence";
    les1.day = day1;
    les1.time = tim1;
    les1.SKS = sks1;
    les1.final_score = A*3;
    maj1.sem_1.lesson_1 = les1;

    les2.subject = "Physics1 - Mechanics";
    les2.day = day2;
    les2.time = tim1;
    les2.SKS = sks1;
    les2.final_score = 0;
    maj1.sem_1.lesson_2 = les2;

    les3.subject = "Digital Literacy";
    les3.day = day3;
    les3.time = tim2;
    les3.SKS = sks1;
    les3.final_score = 0;
    maj1.sem_1.lesson_3 = les3;

    les4.subject = "Statistics, Problem Solving, and Decision Making";
    les4.day = day4;
    les4.time = tim1;
    les4.SKS = sks1;
    les4.final_score = A*3;
    maj1.sem_1.lesson_4 = les4;

    les5.subject = "Career Portfolio";
    les5.day = day4;
    les5.time = tim2;
    les5.SKS = sks1;
    les5.final_score = 0;
    maj1.sem_1.lesson_5 = les5;

    les6.subject = "Integrative Survival Experience 1";
    les6.day = day5;
    les6.time = tim3;
    les6.SKS = sks2;
    les6.final_score = 0;
    maj1.sem_1.lesson_6 = les6;

    les7.subject = "Physics2 - Electromagnetics, Wave, and Optics";
    les7.day = day5;
    les7.time = tim2;
    les7.SKS = sks1;
    les7.final_score = 0;
    maj1.sem_2.lesson_5 = les7;

    les8.subject = "Calculus and Recitation";
    les8.day = day1;
    les8.time = tim4;
    les8.SKS = sks1;
    les8.final_score = 0;
    maj1.sem_2.lesson_1 = les8;

    les9.subject = "Integrative Survival Experience 2";
    les9.day = day4;
    les9.time = tim5;
    les9.SKS = sks2;
    les9.final_score = 0;
    maj1.sem_2.lesson_4 = les9;

    les10.subject = "Coding and Big Data";
    les10.day = day1;
    les10.time = tim2;
    les10.SKS = sks1;
    les10.final_score = 0;
    maj1.sem_2.lesson_2 = les10;

    les11.subject = "Psychology and Design Thinking";
    les11.day = day2;
    les11.time = tim4;
    les11.SKS = sks1;
    les11.final_score = 0;
    maj1.sem_2.lesson_3 = les11;

    //start the program
    cout << "ELECTRICAL ENGINEERING CURRICULUM" << endl << endl << "WHAT SEMESTER YOU WANT TO SEE? " << endl;
    cout << "1) 20201" << endl << "2) 20202" << endl << "1 OR 2? ";
    cin >> smt;
    cout << endl;

    if(smt==1){
        cout << "Subject     : " << maj1.sem_1.lesson_1.subject << " (" << maj1.sem_1.lesson_1.SKS << ")" << endl;
        cout << "Lecturer    : " << maj1.lecturer_1.name << " (" << maj1.lecturer_1.gender << ")" << endl;
        cout << "Schedule    : " << maj1.sem_1.lesson_1.day << " (" << maj1.sem_1.lesson_1.time << ")" << endl;
        cout << "Final Score : " << maj1.sem_1.lesson_1.final_score << endl << endl;

        cout << "Subject     : " << maj1.sem_1.lesson_2.subject << " (" << maj1.sem_1.lesson_2.SKS << ")" << endl;
        cout << "Lecturer    : " << maj1.lecturer_3.name << " (" << maj1.lecturer_3.gender << ")" << endl;
        cout << "Schedule    : " << maj1.sem_1.lesson_2.day << " (" << maj1.sem_1.lesson_2.time << ")" << endl;
        cout << "Final Score : " << maj1.sem_1.lesson_2.final_score << endl << endl;

        cout << "Subject     : " << maj1.sem_1.lesson_3.subject << " (" << maj1.sem_1.lesson_3.SKS << ")" << endl;
        cout << "Lecturer    : " << maj1.lecturer_5.name << " (" << maj1.lecturer_5.gender << ")" << endl;
        cout << "Schedule    : " << maj1.sem_1.lesson_3.day << " (" << maj1.sem_1.lesson_3.time << ")" << endl;
        cout << "Final Score : " << maj1.sem_1.lesson_3.final_score << endl << endl;

        cout << "Subject     : " << maj1.sem_1.lesson_4.subject << " (" << maj1.sem_1.lesson_4.SKS << ")" << endl;
        cout << "Lecturer    : " << maj1.lecturer_2.name << " (" << maj1.lecturer_2.gender << ")" << endl;
        cout << "Schedule    : " << maj1.sem_1.lesson_4.day << " (" << maj1.sem_1.lesson_4.time << ")" << endl;
        cout << "Final Score : " << maj1.sem_1.lesson_4.final_score << endl << endl;

        cout << "Subject     : " << maj1.sem_1.lesson_5.subject << " (" << maj1.sem_1.lesson_5.SKS << ")" << endl;
        cout << "Lecturer    : " << maj1.lecturer_4.name << " (" << maj1.lecturer_4.gender << ")" << endl;
        cout << "Schedule    : " << maj1.sem_1.lesson_5.day << " (" << maj1.sem_1.lesson_5.time << ")" << endl;
        cout << "Final Score : " << maj1.sem_1.lesson_5.final_score << endl << endl;

        cout << "Subject     : " << maj1.sem_1.lesson_6.subject << " (" << maj1.sem_1.lesson_6.SKS << ")" << endl;
        cout << "Lecturer    : " << maj1.lecturer_3.name << " (" << maj1.lecturer_3.gender << "); " << maj1.lecturer_6.name << " (" << maj1.lecturer_6.gender << ")" << endl;
        cout << "Schedule    : " << maj1.sem_1.lesson_6.day << " (" << maj1.sem_1.lesson_6.time << ")" << endl;
        cout << "Final Score : " << maj1.sem_1.lesson_6.final_score << endl << endl;

        cout << "GPA : " << (maj1.sem_1.lesson_1.final_score + maj1.sem_1.lesson_2.final_score + maj1.sem_1.lesson_3.final_score + maj1.sem_1.lesson_4.final_score + maj1.sem_1.lesson_5.final_score + maj1.sem_1.lesson_6.final_score)/21 << endl;
    }else if(smt==2){
        cout << "Subject     : " << maj1.sem_2.lesson_1.subject << " (" << maj1.sem_2.lesson_1.SKS << ")" << endl;
        cout << "Lecturer    : " << maj1.lecturer_9.name << " (" << maj1.lecturer_9.gender << ")" << endl;
        cout << "Schedule    : " << maj1.sem_2.lesson_1.day << " (" << maj1.sem_2.lesson_1.time << ")" << endl;
        cout << "Final Score : " << maj1.sem_2.lesson_1.final_score << endl << endl;

        cout << "Subject     : " << maj1.sem_2.lesson_2.subject << " (" << maj1.sem_2.lesson_1.SKS << ")" << endl;
        cout << "Lecturer    : " << maj1.lecturer_5.name << " (" << maj1.lecturer_5.gender << ")" << endl;
        cout << "Schedule    : " << maj1.sem_2.lesson_2.day << " (" << maj1.sem_2.lesson_2.time << ")" << endl;
        cout << "Final Score : " << maj1.sem_2.lesson_2.final_score << endl << endl;

        cout << "Subject     : " << maj1.sem_2.lesson_3.subject << " (" << maj1.sem_2.lesson_3.SKS << ")" << endl;
        cout << "Lecturer    : " << maj1.lecturer_7.name << " (" << maj1.lecturer_7.gender << ")" << endl;
        cout << "Schedule    : " << maj1.sem_2.lesson_3.day << " (" << maj1.sem_2.lesson_3.time << ")" << endl;
        cout << "Final Score : " << maj1.sem_2.lesson_3.final_score << endl << endl;

        cout << "Subject     : " << maj1.sem_2.lesson_4.subject << " (" << maj1.sem_2.lesson_4.SKS << ")" << endl;
        cout << "Lecturer    : " << maj1.lecturer_3.name << " (" << maj1.lecturer_3.gender << ")" << endl;
        cout << "Schedule    : " << maj1.sem_2.lesson_4.day << " (" << maj1.sem_2.lesson_4.time << ")" << endl;
        cout << "Final Score : " << maj1.sem_2.lesson_4.final_score << endl << endl;

        cout << "Subject     : " << maj1.sem_2.lesson_5.subject << " (" << maj1.sem_2.lesson_5.SKS << ")" << endl;
        cout << "Lecturer    : " << maj1.lecturer_8.name << " (" << maj1.lecturer_8.gender << ")" << endl;
        cout << "Schedule    : " << maj1.sem_2.lesson_5.day << " (" << maj1.sem_2.lesson_5.time << ")" << endl;
        cout << "Final Score : " << maj1.sem_2.lesson_5.final_score << endl << endl;

        cout << "GPA : " << (maj1.sem_2.lesson_1.final_score + maj1.sem_2.lesson_2.final_score + maj1.sem_2.lesson_3.final_score + maj1.sem_2.lesson_4.final_score + maj1.sem_2.lesson_5.final_score)/18 << endl;
    }else{
        cout << "YOU TYPE THE WRONG NUMBER" << endl << "PLEASE TRY AGAIN!" << endl;
    }

    cin.get();
    return 0;
}
