// 헤더 선언
#include <iostream>
#include <string.h>
#include <fstream>  //파일 입출력 위한 헤더
using namespace std;
#include "AddBicycle.h"
#include "Exit.h"
#include "RentalBicycleList.h"
#include "Rentbicycle.h"
#include "SignIn.h"
#include "SignOut.h"
#include "SignUp.h"


// 상수 선언
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"



int main()
{
    //변수 선언
    
    ifstream in_fp;
    ofstream out_fp;

    // 함수 선언
    void program_exit();

    // 파일 입출력을 위한 초기화
    in_fp.open(INPUT_FILE_NAME);
    out_fp.open(OUTPUT_FILE_NAME);

    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;

    //admin 미리 등록

    while (!is_program_exit)
    {

        // 입력파일에서 메뉴 숫자 2개를 읽기
        in_fp >> menu_level_1 >> menu_level_2;

        // 메뉴 구분 및 해당 연산 수행
        switch (menu_level_1)
        {
        case 1:
        {
            switch (menu_level_2)
            {
            case 1:   // "1.1. 회원가입" 메뉴 부분
            {
                // 해당 기능 수행 
                //SignUp signup(in_fp, out_fp);
                break;
            }
            }
            break;
        }
        case 2:
        {
            switch (menu_level_2)
            {
            case 1:   // "2.1. 로그인" 메뉴 부분
            {
                // 해당 기능 수행 
                //SignIn signin(in_fp, out_fp);
                break;
            }
            case 2:    // "2.2. 로그아웃" 메뉴 부분
            {
                // SignOut signout(in_fp, out_fp);
                //signout.inputSignOut();
                break;
            }
            }
            break;
        }
        case 3:
        {
            switch (menu_level_2)
            {
                case 1:   // "3.1. 자전거 등록" 메뉴 부분
                {
                    // 해당 기능 수행 
                    AddBicycle addbicycle(in_fp, out_fp);
                    break;
                }
            }
            break;
        }
        case 4:
        {
            switch (menu_level_2)
            {
                case 1:   // "4.1. 자전거 대여" 메뉴 부분
                {
                    // 해당 기능 수행 
                    //RentBicycle rentbicycle(in_fp, out_fp);


                    break;
                }
            }
            break;
        }
        case 5:
        {
            switch (menu_level_2)
            {
                case 1:   // "5.1. 자전거 대여 리스트" 메뉴 부분
                {
                    // 해당 기능 수행 
                    //RentalBicycleList rentalbicyclelist;
                    //rentalbicyclelist.inputRentalBicycleList();

                    break;
                }
            }
            break;
        }
        case 6:
        {
            switch (menu_level_2)
            {
                case 1:   // "6.1. 종료" 메뉴 부분
                {
                
                    is_program_exit = 1;
                    break;
                }
            }
            break;
        }

        }
    }



    out_fp.close();
    in_fp.close();

    return 0;
}
