////관리자 파일: /Users/moontaeseo/Desktop/codeing/single/project/C/project(FileEdit)_01_c/manager_file
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<unistd.h>
//
//void file_loading(void);  //파일 불러오기 함수원형
//void file_save(void);  //파일 저장 함수원형
//int menu(void);  //메뉴 함수원형
//void print_list(void);  //리스트 출력 함수원형
//int file_choice(char purpose[10]);  //파일 선택 함수원형
//void file_read(int);   //파일 읽기 함수원형
//void file_edit(int choice);  //파일 수정 함수원형
//void file_delete(int);  //파일 삭제 a함수원형
//void file_create(void);  //파일 생성 함수원형
//int end(void);  //프로그램 종료 함수원형
//
//
//struct file_data  //파일_데이터 구조체선언
//{
//    char file_name[1000];  //파일이름 - 경로
//};
//struct file_data file[100];  //전역 구조체변수
//struct file_data add;  //전역 구조체변수 - (추가 파일)
//
//
//int count = 0;  //전역변수 - (파일개수)
//int delete = -100;  //전역변수 - (삭제파일)
//int addition = 0;  //전역변수 - (추가파일)
//
//
//int main(void)
//{
//    int choice[2];  //[0]메뉴선택, [1]파일선택
//
//     while (1)
//     {
//        file_loading();  //파일 불러오기 함수실행
//
//        choice[0] = menu();  //메뉴선택 함수실행
//
//        switch (choice[0])
//        {
//            case 1:  //1.파일목록
//
//                print_list();  //리스트 출력 함수실행
//                break;
//
//            case 2:  //2.파일열람
//                choice[1] = file_choice("열람");  //파일선택 함수실헹
//                file_read(choice[1]);  //파일열람 함수실행
//                break;
//
//            case 3:  //3.파일수정
//                choice[1] = file_choice("수정");  //파일선택 함수실행
//                file_edit(choice[1]);  //파일수정 함수실행
//                break;
//
//            case 4:  //4.파일 삭제
//                choice[1] = file_choice("삭제");
//                file_delete(choice[1]);  //파일삭제 함수실행
//                break;
//
//            case 5:  //5.파일 생성함수
//                file_create();
//                break;
//
//            case 6:  //6.프로그램 종료
//                file_save();  //파일저장 함수실행
//                return(end());  //프로그램 종료 함수실행
//        }
//
//         file_save();  //파일 저장함수 실행
//
//         strcpy(add.file_name, "\0");
//
//         count = 0;
//         delete = -100;
//         addition = 0;
//    }
//
//}
//
//
//
//void file_loading(void)  //파일 불러오기 함수
//{
//    FILE *fp = NULL;
//
//    fp = fopen("/Users/moontaeseo/Desktop/codeing/single/project/C/project(FileEdit)_01_c/manager_file", "r");
//    if (fp == NULL)
//    {
//        printf("파일을 열 수 없습니다.. (에러코드 - 0)");
//    }
//
//    fscanf(fp, "%d", &count);   //관리자 파일에 저장된 사용자 파일의 개수
//
//    for (int i = 0; i < count; i++)
//    {
//        fscanf(fp, "%s\n", file[i].file_name);
//    }
//
//    fclose(fp);
//
//}
//
//int menu(void)  //메뉴함수
//{
//    int choice;
//
//    printf("실행하실 메뉴를 선택하여주세요..\n\n");
//    printf("1. 파일목록\n");
//    printf("2. 파일열람\n");
//    printf("3. 파일수정\n");
//    printf("4. 파일삭제\n");
//    printf("5. 파일추가\n");
//    printf("6. 프로그램 종료\n");
//
//    scanf("%d", &choice);
//
//    return(choice);
//}
//
//
//void print_list(void)  //리스트 출력함수
//{
//    printf("파일목록  ===================================\n\n");
//
//    for (int i = 0; i < count; i++)
//    {
//        printf("%d.파일:  %s\n", i, file[i].file_name);
//    }
//}
//
//
//int file_choice(char purpose[10])  //파일 선택함수
//{
//    int choice;
//
//    do
//    {
//        printf("!! '-1'을 입력하면 파일목록 출력\n\n");
//        printf("%s하실 파일의 번호를 입력하세요  >> ", purpose);
//        scanf("%d", &choice);
//
//        if (choice == -1)
//        {
//            print_list();
//        }
//
//    } while (choice == -1);
//
//    return(choice);
//}
//
//
//void file_read(int choice)  //파일읽기 함수
//{
//    int a;
//    FILE *fp = NULL;
//
//    fp = fopen(file[choice].file_name, "r");
//    if (fp == NULL)
//    {
//        printf("파일을 열 수 없었습니다.. (에러코드 - 1)");
//    }
//
//    printf("파일: %d. - %s\n================================\n", choice, file[choice].file_name);
//
//    while ((a = fgetc(fp)) != EOF)
//    {
//        printf("%c", a);
//    }
//
//    printf("\n==========================================");
//
//    printf("\n\n\n");
//
//    fclose(fp);
//}
//
//
//void file_edit(int choice)  //파일 수정함수
//{
//    int input;
//
//    printf("해당하는 번호를 입력하여주세요\n\n");
//    printf("1. 내용 추가하기\n");
//    printf("2. 내용 덮어쓰기\n");
//
//    scanf("%d", &input);
//
//    while(getchar() != '\n');  //입력버퍼 초기화
//
//    if (input == 1)  //내용 추가하기
//    {
//        char ch[1000];
//
//        FILE *fp = NULL;
//
//        fp = fopen(file[choice].file_name, "a+, ccs=UTF-8");
//        if (fp == NULL)
//        {
//            printf("파일을 열 수 없었습니다.. (에러코드 - 2)");
//        }
//
//        printf("파일 뒤에 추가하실 내용을 입력\n\n");
//
//        fgets(ch, 1000, stdin);
//
//        fprintf(fp, "%s", ch);
//
//        printf("파일에 성공적으로 내용이 추가되었습니다.");
//
//
//        fclose(fp);
//    }
//    else if (input == 2)  //내용 덮어쓰기
//    {
//        char ch[1000];
//
//        FILE *fp = NULL;
//
//        fp = fopen(file[choice].file_name, "w, ccs=UTF-8");
//        if (fp == NULL)
//        {
//            printf("파일을 열 수 없었습니다.. (에러코드 - 3)");
//        }
//
//        printf("파일에 덮어쓰실 내용을 입력\n\n");
//        fgets(ch, 1000, stdin);
//
//        fprintf(fp, "%s", ch);
//
//        fclose(fp);
//   }
//}
//
//
//void file_delete(int choice)  //파일 삭제함수
//{
//    delete = choice;  //전역변수 - (삭제파일)
//}
//
//
//void file_create(void)  //파일 생성함수
//{
//    char ch[1000];
//
//    while(getchar() != '\n');  //입력버퍼 초기화
//
//
//    printf("생성하실 파일의 경로를 입력하여주세요..\n\n");
//    scanf("%s", ch);
//
//    strcpy(add.file_name, ch);
//
//    ++addition;
//}
//
//
//void file_save(void)  //파일 저장함수
//{
//    FILE *fp = NULL;
//
//    fp = fopen("/Users/moontaeseo/Desktop/codeing/single/project/C/project(FileEdit)_01_c/manager_file", "w");
//    if (fp == NULL)
//    {
//        printf("파일을 열 수 없었습니다.. (에러코드 - 4)");
//    }
//
//
//
//    if (delete != -100)  //파일이 삭제되었을 때
//    {
//
//        fprintf(fp, "%d\n", (count - 1));
//
//        for (int i = 0; i < count; i++)
//        {
//            if (i == delete)
//            {
//                continue;
//            }
//            else
//            {
//                fprintf(fp, "%s\n", file[i].file_name);
//            }
//        }
//
//    }
//    else if (addition != 0)  //파일이 추가되었을 때
//    {
//
//        fprintf(fp, "%d\n", (count + 1));
//
//        for (int i = 0; i < count; i++)
//        {
//            fprintf(fp, "%s\n", file[i].file_name);
//        }
//
//        fprintf(fp, "%s\n", add.file_name);
//
//    }
//    else  //파일이 삭제, 추가되지 않았을 때
//    {
//
//        fprintf(fp, "%d\n", count);
//
//        for (int i = 0; i <count; i++)
//        {
//            fprintf(fp, "%s\n", file[i].file_name);
//        }
//
//    }
//
//
//    fclose(fp);
//
//}
//
//
//int end(void)  //프로그램 종료 함수
//{
//    for (int i = 5; i >= 0; i--)
//    {
//        printf("%d초 뒤에 종료됩니다.\n", i);
//
//        sleep(1);
//    }
//
//    return 0;
//}
