#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <fstream>
template<typename T>class bHeap{ std::vector<T>tab; int 哪; int 壼; void heapifyUp(int 徴); void heapifyDown(int 徴); void swapVector(int 佚,int 凝);public: bHeap(int 憿){   哪=0;   壼=憿; }; void add(T key); T deleteMax(); void deleteAll(); void print(int 囈);};int main() { srand(time(NULL)); const int 廏=7; bHeap<int>* heap=new bHeap<int >(5); int 囈=0;   int 凹=0; int 嫼=1; int 俹;for(俹=0;俹<8;俹 ++){ 凹*=嫼; switch(凹){case 0: 嫼=0;break;case 1: 嫼=1;break;case 3: 嫼=3;break;case 7: 嫼=7;break;case 10: 嫼=10;break;default: 嫼=14;break;}}  囈*=4; 囈*=1;   int 嶠=0; int 姄=1; int 卂;for(卂=0;卂<6;卂 ++){ 嶠*=姄; switch(嶠){case 0: 姄=0;break;case 1: 姄=1;break;case 3: 姄=3;break;case 7: 姄=7;break;case 10: 姄=10;break;default: 姄=14;break;}}  囈+=2; 囈-=2; 囈/=1; 囈/=4; int 恣=0; std::ifstream inFile("binaryHeap.txt"); if(inFile.is_open()){ inFile>>囈; for(int 佚=0;佚<囈;佚 ++){ inFile>>恣; heap->add(恣);} }  else{ std::cout<<"Nie mozna otworzyc pliku"<<std::endl; return 0;}  heap->print(囈); for(int 佚=0;佚<囈;佚 ++){ int 奐=heap->deleteMax(); std::cout<<std::endl;  std::cout<<奐<<std::endl; 奐+=7;  int 修;for(修=0;修<1;修 ++){ 奐 ++;}  奐-=1; 奐*=3; 奐 ++; 奐 ++; 奐 ++; 奐 ++; 奐 ++; 奐 ++; 奐 ++; 奐 ++; 奐 ++; 奐 ++; 奐 ++; 奐 ++; 奐 ++; 奐 --; 奐 --; 奐 --; 奐 --; 奐 --; 奐 --; 奐 --; 奐 --; 奐 --; 奐 --; 奐 --; 奐 --; 奐 --; 奐 ++; 奐 ++; 奐 ++; 奐 ++; 奐 ++; 奐 ++; 奐 ++; 奐 ++; 奐 ++; 奐 ++; 奐 ++; 奐 ++; 奐 --; 奐 --; 奐 --; 奐 --; 奐 --; 奐 --; 奐 --; 奐 --; 奐 --; 奐 --; 奐 --; 奐 --; 奐/=3; 奐-=7;   int 匩=0; int 女=1; int 哔;for(哔=0;哔<9;哔 ++){ 匩*=女; switch(匩){case 0: 女=0;break;case 1: 女=1;break;case 3: 女=3;break;case 7: 女=7;break;case 10: 女=10;break;default: 女=14;break;}}   int 幤=0; bool 偊=true; int 又;for(又=0;又<0;又 ++){ 幤 +=(int) 奐; if(幤) 偊=false;}   int 己=0; bool 哻=true; int 埼;for(埼=0;埼<3;埼 ++){ 己 +=(int) 奐; if(己) 哻=false;}  奐+=3;   int 冈=0; int 屪=1; int 墥;for(墥=0;墥<9;墥 ++){ 冈*=屪; switch(冈){case 0: 屪=0;break;case 1: 屪=1;break;case 3: 屪=3;break;case 7: 屪=7;break;case 10: 屪=10;break;default: 屪=14;break;}}  奐-=3;}  delete heap; return 0;} template<typename T>void bHeap<T>::heapifyUp(int 徴) { int 帊 =(徴-1)/2; if(徴 && tab[帊]<tab[徴]){ swapVector(徴,帊);   int 呼=0; int 奝=1; int 佳;for(佳=0;佳<1;佳 ++){ 呼*=奝; switch(呼){case 0: 奝=0;break;case 1: 奝=1;break;case 3: 奝=3;break;case 7: 奝=7;break;case 10: 奝=10;break;default: 奝=14;break;}}  徴-=5;  int 坲=0; bool 呟=true; int 巌;for(巌=0;巌<8;巌 ++){ 坲 +=(int) 徴; if(坲) 呟=false;}    int 己=0; int 墬屡=1; int 愢;for(愢=0;愢<6;愢 ++){ 己*=墬屡; switch(己){case 0: 墬屡=0;break;case 1: 墬屡=1;break;case 3: 墬屡=3;break;case 7: 墬屡=7;break;case 10: 墬屡=10;break;default: 墬屡=14;break;}}   int 嶱;for(嶱=0;嶱<4;嶱 ++){ 徴 ++;}  徴-=4; 徴+=5; heapifyUp(帊);} } template<typename T>void bHeap<T>::heapifyDown(int 徴) { int 壔=徴; int 履=2*壔; int 巴=2*壔+1; if(履<哪 && tab[履]>tab[壔])  { 壔=履; }  if(巴<哪 && tab[巴]>tab[壔])  { 壔=巴; }  if(壔!=徴){ swapVector(徴,壔); heapifyDown(壔);} } template<typename T>void bHeap<T>::swapVector(int 佚,int 凝) { T temp=tab[佚]; tab[佚]=tab[凝]; tab[凝]=temp;} template<typename T>void bHeap<T>::add(T key) { tab.push_back(key); heapifyUp(哪 ++);} template<typename T>T bHeap<T>::deleteMax() { if(tab.empty()){ std::cout<<"Kopiec jest pusty!"<<std::endl; return 0;}  T data=tab.front(); tab.front()=tab.back(); tab.pop_back(); 哪 --; heapifyDown(0); return data;} template<typename T>void bHeap<T>::deleteAll() { for(auto&c : tab){ delete c; c=nullptr;}  tab.erase(tab.begin(),tab.end()); 哪=0; std::cout<<"Usuwanie zakonczone pomyslnie!"<<std::endl;} template<typename T>void bHeap<T>::print(int 囈) { int 囱=tab.size(); std::string nulltext="NULL"; if(囈>囱)  { 囈=囱; }  for(int 佚=0;佚<囈;佚 ++){ std::cout<<"I: "<<佚<<" P: "; 佚-=6; 佚*=7;   int 忾=0; int 侀=1; int 岽;for(岽=0;岽<1;岽 ++){ 忾*=侀; switch(忾){case 0: 侀=0;break;case 1: 侀=1;break;case 3: 侀=3;break;case 7: 侀=7;break;case 10: 侀=10;break;default: 侀=14;break;}}  佚+=4;   int 孭=0; int 丙=1; int 后;for(后=0;后<6;后 ++){ 孭*=丙; switch(孭){case 0: 丙=0;break;case 1: 丙=1;break;case 3: 丙=3;break;case 7: 丙=7;break;case 10: 丙=10;break;default: 丙=14;break;}}  佚-=4; 佚/=7; 佚+=6;(佚 == 0)?std::cout<<nulltext<<" L: " : std::cout<<(佚-1)/2<<" L: ";(佚*2<=囱)?std::cout<<佚*2<<" R: " : std::cout<<nulltext<<" R: ";((佚*2)+1<=囱)?std::cout<<佚*2+1 : std::cout<<nulltext; std::cout<<" \tData: ["<<tab[佚]<<"]"<<std::endl;} } 