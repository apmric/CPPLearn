#include <iostream>
using namespace std;

// 오늘의 주제 : 문자와 문자열
// bool은 그냥 정수지만, 참/거짓을 나타내기 위해 사용한다
// 사실 char도 마찬가지, 그냥 정수지만 '문자' 의미를 나타내기 위해 사용

// char : 알파벳 / 숫자 문자를 나타낸다
// wchar_t : 유니코드 문자를 나타낸다

// ASCII (American Standard Code for Information Interchange)

// 아스키코드 사진 참조

// '문자'의 의미로 작은 따옴표 ' ' 사용
char ch = 'a';
char ch2 = '1';
char ch3 = 'a' + 1;

// 국제화 시대에는 영어만으로 서비스 할 수 없음
// 전 세계 모든 문자에 대해 유일 코드를 부여한 것이 유니코드(unicode)
// 참고) 유니코드에서 가장 많은 번호를 차지하는게 한국어/중국어- (뚫쿩웱)

// 유니코드는 표기 방식이 여러가지가 있는데 대표적으로 UTF8 UTF16
// UTF8
// - 알파벳, 숫자 1바이트 (ASCII 동일한 번호)
// - 유럽 지역의 문자는 2바이트
// - 한글, 한자 등 3바이트
// UTF16
// - 알파벳, 숫자, 한글, 한자 등 거의 대부분 문자 2바이트
// - 매우 예외적인 고대 문자만 4바이트 (사실상 무시해도 됨)

wchar_t wch = 0xc548; // L'안';

// Escape Sequence
// 표기하기 애매한 애들을 표현
// \0 = 아스키코드0 = NULL
// \t = 아스키코드9 = Tab
// \n = 아스키코드10 = LineFeed (한줄 아래로)
// \r = 아스키코드13 = CarriageReturn (커서 <<)
// \' \"

// 문자열
// 문자들이 열을 지어서 모여 있는 것 (문자 배열)
// 정수 (1 ~ 8바이트) 고정 길이로 저장
// Ex) Hello World 123123 djjojwkejfoij 가변 길이
// \0 : 문자열 끝 항상 마지막에 들어감 // 끝은 NULL(0)

char str[] = { 'h', 'e', 'l', 'l', 'o', '\0' };
char str2[] = "Hello World"; // 마지막에 0까지 추가하여 길이가 12임

wchar_t str3[] = L"Hellow World";

int main()
{
	cout << ch << endl;
	cout << ch2 << endl;
	cout << ch3 << endl;

	// cout은 char 전용
	wcout.imbue(locale("kor"));
	wcout << wch << endl;

	cout << str << endl;
	cout << str2 << endl;
	wcout << str3 << endl;
}