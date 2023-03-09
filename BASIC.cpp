) Một số bài tập cơ bản
Bài 1: Tính S(n) = 1 + 2 + 3 + … + n
#include <iostream>
using namespace std;
int main()
{
    int n;
    long s;
    s=0;
    cout<<"nhap n= ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        s=s+i;
    }
    cout<<"Tong 1+2+3+...+n= "<<s;
    return 0;
}
Bài 2: Tính S(n) = 1^2 + 2^2 + 3^2 + … + n
#include <iostream>
using namespace std;
int main()
{
    int n;
    long s;
    s=0;
    cout<<"nhap n= ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        s=s+i*i;
    }
    cout<<"Tong 1^2 +2^2 +3^2 ...+n^2= "<<s;
    return 0;
}
Bài 3: Tính S(n) = 1+1/2 + 1/3 + 1/4 + … + 1/n
#include <iostream>
using namespace std;
int main()
{
    int n;
    long s;
    s=0;
    do
    {
        cout<<"nhap n= ";
        cin>>n;
        if(n<1)
        {
            cout<<"so phai lon hon hoac bang 1 !";
        }
    }while(n<1);
    for(int i=1;i<=n;i++)
    {
        s=s+1/i;
    }
    cout<<"Tong 1+1/2+1/3+...1/n= "<<s;
    return 0;
}
Bài 4: Liệt kê các ước số lẻ , đếm số lượng ước số lẻ và tính tổng và tích ước số lẻ của số nguyên dương n.
#include <iostream>
using namespace std;
int main()
{
    int n;
    int count=0;
    long s=0;
    long t=1;
    do
    {
        cout<<"nhap n ( n>0)= ";
        cin>>n ;
        if(n<=0)
        {
            cout<<" n <=0 roi , nhap lai di !";
        }
    }while(n<=0);
    cout<<"Cac uoc le la ";
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            if(i%2==1)
            {
                cout<<" "<< i;
                count++;
                s=s+i;
                t=t*i;
            }
        }
    }
    cout<<"va" <<"so luong cac uoc le la "<<count<< " "<< " tong cua cac uoc le la = "<<s<<" "<<"Tich cua cac uoc le la "<<t<<endl;
    return 0;
}
Bài 5: Cho số nguyên n , kiểm tra có phải số hoàn thiện hay không 
#include <iostream>
using namespace std;
int main()
{
    int n;
    int count=0;
    long s=0;
    do
    {
        cout<<"nhap n ( n>0)= ";
        cin>>n ;
        if(n<=0)
        {
            cout<<" n <=0 roi , nhap lai di !";
        }
    }while(n<=0);
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            s=s+i;
        }
    }
    if(s==n)
    {
        cout<<"la so hoan thien";
    }
    else
    {
        cout<<"khong phai la so hoan thien";
    }
    return 0;
}
Bài 5: Cho số nguyên n , kiểm tra có phải số chính phương hay không (số chính phương là số mà khi căn bặc 2 nó là 1 số nguyên vd 4 , 9 ,16,...)
#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;
int main()
{
    int i,n;
    do
    {
        cout<<"nhap n ( n>0)= ";
        cin>>n ;
        if(n<=0)
        {
            cout<<" n <=0 roi , nhap lai di !";
        }
    }while(n<=0);
    if(sqrt((float)n) == (int)sqrt((float)n))
    {
        cout<<"la so chinh phuong";
    }
    else
    {
        cout<<"khong phai la so chinh phuong";
    }
    return 0;
}

Bài 6: Viết chương trình kiểm tra có phải số nguyên tố hay không ? nếu là số nguyên tố thì in ra "1" , không thì ra "0".
#include <cmath>
#include <iostream>
using namespace std;
int main() {
    int i = 2, kt = 1;
    int n;
    cin >> n;
    if (n != 0 && n != 1) {
        while(i <= n/2) {
            if(n%i == 0) {
                kt = 0;
                break;
            }
            i++;
        }
    } else {
       kt = 0;
    }
    if(kt == 1) {
        cout<< "1" << endl;
    } else {
        cout<< "0" << endl;
    }
    return 0;
}
Bài 7: Đếm số lượng chữ số lẻ của số nguyên dương n, tính tổng và tích của cá chữ số lẻ đó.
#include <iostream>
using namespace std;
int main()
{
    long a,n;
    int sochuso;
    float s=0;
    float p=1;
    do
    {
        cout<<"nhap n= ";
        cin>>n;
    }while(n<0 && cout<<"loi n>=0 !");
    sochuso=0;
    a=n;
    
    if(n==0)
    {
        sochuso =1;
    }
    while(a !=0)
    {
        if(a%2 !=0)
        {
            sochuso=sochuso+1;
            s=s+(a%10);
            p=p*(a%10);
        }
        a=a/10;
    }
    cout<<"so chu so le la = "<<sochuso<<" va co tong va tich la = "<<s<<" and "<<p<<endl;
    return 0;
}
Bài 8 : Viết chương trình in ra các kí tự từ A đến Z
#include <iostream>
using namespace std;
int main() 
{
    cout<<endl;
    for(char i = 'A'; i <= 'Z'; i++)
    {
        cout<<i<<"\t";
    }
}
Bài 9: Kiểm tra đây là tam giác gì?
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a + b <= c || a + c <= b ||  b + c <= a)
    {
        cout<<"day khong phai la tam giac";
    }
    else
    {
        cout<<"day la tam giac ";
        if((a == b) && (b == c))
        {
            cout<<"deu";
        }
        else
        {
            if(a * a + b * b == c * c || a * c + c * c == b * b || b * b + c * c == a * c)
            {
                cout<<"vuong";
            }
            if(a == b || a == c || b == c)
            {
                cout<<"can";
            }
            else
            {
                cout<<"thuong";
            }
        }
    }
}

II) Mảng 1 chiều 
1) Viết chương trình nhập , xuất mảng 1 chiều 
#include <iostream>
using namespace std;
const int MAX = 100; // số phần tử tối đa trong mảng
void NhapMang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Nhap phan tu a[" << i << "]: ";
        cin >> a[i];
    }
}
void XuatMang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}
int main() {
    int n;
    int a[MAX];
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;
    NhapMang(a, n);
    cout << "Mang vua nhap la: ";
    XuatMang(a, n);
    return 0;
}

2) Tìm giá trị lớn nhất , giá trị nhỏ nhất của mảng A
#include<iostream>
using namespace std;
const int MAX=1000;

void nhapmang(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"Nhap phan tu a["<<i<<"]: ";
        cin>>a[i];
    }
}
void timMaxMin(int a[],int n,int& max,int& min)
{
    max = min = a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
        if(a[i]<min)
        {
            min=a[i];
        }
    }
}
int main()
{
    int n,a[MAX],max,min;
    cout<<"Nhap so phan tu: ";
    cin>>n;
    nhapmang(a,n);
    timMaxMin(a,n,max,min);
    cout<<"Max= "<<max<<endl;
    cout<<"Min= "<<min<<endl;
    return 0;
}


3) tìm số nguyên tố trong mảng A
#include <iostream>
using namespace std;
const int MAX = 1000;
bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
void nhapmang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Nhap phan tu a[" << i << "]: ";
        cin >> a[i];
    }
}
void inSNT(int a[], int n) {
    cout << "Cac so nguyen to trong mang la: ";
    for (int i = 0; i < n; i++) {
        if (isPrime(a[i])) {
            cout << a[i] << " ";
        }
    }
}
int main() {
    int n, a[MAX];
    cout << "Nhap so phan tu: ";
    cin >> n;
    nhapmang(a, n);
    inSNT(a, n);
    return 0;
}
4) kiểm tra mảng A có toàn số chẵn
#include <iostream>
using namespace std;
const int MAX = 1000;
void nhapmang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Nhap phan tu a[" << i << "]: ";
        cin >> a[i];
    }
}
bool kiemtra(int a[], int n) {
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            return false;
        }
    }
    return true;
}
int main() {
    int n, a[MAX];
    cout << "Nhap so phan tu: ";
    cin >> n;
    nhapmang(a, n);
    if (kiemtra(a, n)) {
        cout << "Mang A chi chua cac so chan.\n";
    } else {
        cout << "Mang A khong chi chua cac so chan.\n";
    }
    return 0;
}

5)  kiểm tra mảng A có toàn số nguyên tố
#include <iostream>
using namespace std;

const int MAX = 1000;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

void nhapmang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Nhap phan tu a[" << i << "]: ";
        cin >> a[i];
    }
}

bool kiemtra(int a[], int n) {
    for (int i = 0; i < n; i++) {
        if (!isPrime(a[i])) {
            return false;
        }
    }
    return true;
}

int main() {
    int n, a[MAX];
    cout << "Nhap so phan tu: ";
    cin >> n;
    nhapmang(a, n);
    if (kiemtra(a, n)) {
        cout << "Mang A chi chua cac so nguyen to.\n";
    } else {
        cout << "Mang A khong chi chua cac so nguyen to.\n";
    }

    return 0;
}
III )  Mảng 2 chiều 
1 )Cho mảng 2 chiều có m hàng và n cột , viết hàm nhập và hàm xuất 
#include <iostream>
using namespace std;
const int MAX_ROWS = 100; // Giới hạn số hàng của mảng
const int MAX_COLS = 100; // Giới hạn số cột của mảng
// Hàm nhập mảng
void NhapMang(int A[][MAX_COLS], int m, int n) {
    cout << "Nhap cac phan tu cua mang:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "A[" << i << "][" << j << "] = ";
            cin >> A[i][j];
        }
    }
}
// Hàm xuất mảng
void XuatMang(int A[][MAX_COLS], int m, int n) {
    cout << "Cac phan tu cua mang la:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}
int main() {
    int m, n;
    int A[MAX_ROWS][MAX_COLS];
    cout << "Nhap so hang cua mang: ";
    cin >> m;
    cout << "Nhap so cot cua mang: ";
    cin >> n;
    NhapMang(A, m, n);
    XuatMang(A, m, n);
    return 0;
}

2 )Tính tổng của từng cột trong mảng 2 chiều 
Ví dụ khi tôi nhập như sau :
1 5 3
2 7 1
9 1 0
5 1 3
In ra màn hình: 17 14 7 
#include <iostream>
using namespace std;
const int MAX_ROWS = 100; // Giới hạn số hàng của mảng
const int MAX_COLS = 100; // Giới hạn số cột của mảng
// Hàm nhập mảng
void NhapMang(int A[][MAX_COLS], int m, int n) {
    cout << "Nhap cac phan tu cua mang:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "A[" << i << "][" << j << "] = ";
            cin >> A[i][j];
        }
    }
}
// Hàm xuất mảng
void XuatMang(int A[][MAX_COLS], int m, int n) {
    cout << "Cac phan tu cua mang la:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}
// Hàm tính tổng của từng cột
void TinhTongCot(int A[][MAX_COLS], int m, int n) {
    int tong[MAX_COLS] = {0}; // Khởi tạo mảng chứa tổng của từng cột
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < m; i++) {
            tong[j] += A[i][j]; // Cộng phần tử thứ j của mỗi hàng vào tổng của cột thứ j
        }
    }
    // In ra tổng của từng cột
    cout << "Tong cua tung cot la: ";
    for (int j = 0; j < n; j++) {
        cout << tong[j] << " ";
    }
    cout << endl;
}
int main() {
    int m, n;
    int A[MAX_ROWS][MAX_COLS];
    cout << "Nhap so hang cua mang: ";
    cin >> m;
    cout << "Nhap so cot cua mang: ";
    cin >> n;
    NhapMang(A, m, n);
    XuatMang(A, m, n);
    TinhTongCot(A, m, n);
    return 0;
}

3 )Tính tổng của từng hàng trong mảng 2 chiều 
Ví dụ khi tôi nhập như sau :
1 5 3
2 7 1
9 1 0
5 1 3
In ra màn hình: 9 10 10 9
#include <iostream>
using namespace std;
const int MAX_ROWS = 100; // Giới hạn số hàng của mảng
const int MAX_COLS = 100; // Giới hạn số cột của mảng
// Hàm nhập mảng
void NhapMang(int A[][MAX_COLS], int m, int n) {
    cout << "Nhap cac phan tu cua mang:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "A[" << i << "][" << j << "] = ";
            cin >> A[i][j];
        }
    }
}
// Hàm xuất mảng
void XuatMang(int A[][MAX_COLS], int m, int n) {
    cout << "Cac phan tu cua mang la:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}
// Hàm tính tổng của từng hàng
void TinhTongHang(int A[][MAX_COLS], int m, int n) {
    int tong[MAX_ROWS] = {0}; // Khởi tạo mảng chứa tổng của từng hàng
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            tong[i] += A[i][j]; // Cộng phần tử thứ i của mỗi cột vào tổng của hàng thứ i
        }
    }
    // In ra tổng của từng hàng
    cout << "Tong cua tung hang la: ";
    for (int i = 0; i < m; i++) {
        cout << tong[i] << " ";
    }
    cout << endl;
}
int main() {
    int m, n;
    int A[MAX_ROWS][MAX_COLS];
    cout << "Nhap so hang cua mang: ";
    cin >> m;
    cout << "Nhap so cot cua mang: ";
    cin >> n;
    NhapMang(A, m, n);
    XuatMang(A, m, n);
    TinhTongHang(A, m, n);
    return 0;
}
4) Nhập xuất mảng 2 chiều , tính tổng hàng , snt và chuyển sang mảng 1 chiều
#include<iostream>
using namespace std;
const int MAX_ROW =100;
const int MAX_COL =100;
bool check(int n)
{
    if(n<=1)
    {
        return false;
    }
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
void nhapmang(int a[][MAX_COL],int m, int n)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"Nhap phan tu a["<<i<<"]["<<j<<"]: ";
            cin>>a[i][j];
        }
    }
}
void xuatmang(int a[][MAX_COL],int m, int n)
{
    int sum=0;
    cout<<"Cac so da nhap la: ";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
            if(check(a[i][j]))
            {
                sum+=a[i][j];
            }
        }
        cout<<endl;
    }
    cout<<"Tong cac so nguyen to la: "<<sum<<endl;
}
void tong(int a[][MAX_COL],int m, int n)
{
    int tong[MAX_ROW]={0};
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            tong[i]+=a[i][j];
        }
    }
    cout<<"Tong cua tung hang la: "<<endl;
    for(int i=0;i<m;i++)
    {
        cout<<tong[i]<<" ";
    }
    cout<<endl;
}
void chuyen2dto1d(int a[][MAX_COL],int m ,int n,int b[])
{
    int c=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            b[c]=a[i][j];
            c++;
        }
    }
}
int main()
{
    int a[MAX_ROW][MAX_COL],m,n;
    cout<<"Nhap hang: "; cin>>m;
    cout<<"Nhap cot:  "; cin>>n;
    nhapmang(a,m,n);
    xuatmang(a,m,n);
    tong(a,m,n);
    
    int b[MAX_COL*MAX_ROW];
    chuyen2dto1d(a,m,n,b);
    cout<<"Mang 1 chieu la: ";
    for(int i=0;i<m*n;i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;
}

IV ) String
1) viết chương trình c++ nhập chuỗi và sau đó chuyển tất cả các tự tự trong chuỗi thành in thường , ví dụ khi tôi nhập "HeLLo WorlD" thì nó sẽ thành "hello world" 
#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
    string str;
    cout << "Nhap chuoi: ";
    getline(cin, str);
    // Chuyen tat ca ky tu thanh chu thuong
    for (int i = 0; i < str.length(); i++) {
        str[i] = tolower(str[i]);
    }
    cout << "Chuoi sau khi chuyen thanh chu thuong: " << str << endl;

    return 0;
}
2) viết chương trình c++ nhập chuỗi và sau đó chuyển tất cả các tự tự trong chuỗi thành in thường , ví dụ khi tôi nhập "HeLLo WorlD" thì nó sẽ thành "HELLO WORLD" 
#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
    string str;
    cout << "Nhap chuoi: ";
    getline(cin, str);
    // Chuyen tat ca ky tu thanh chu in hoa
    for (int i = 0; i < str.length(); i++) {
        str[i] = toupper(str[i]);  
    cout << "Chuoi sau khi chuyen thanh chu in hoa: " << str << endl;
    return 0;
}
3) viết chương trình c++ nhập 2 chuỗi S1 và S2 , viết chương trình kiểm tra S1 có chứa S2 hay không , hàm trả về True nếu S1 chưa S2 
Ví dụ ta nhập S1= "HellO THERE!" và S2="llO", kết quả chương trình là TRUE 
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string S1, S2;
    cout << "Nhap chuoi S1: ";
    getline(cin, S1);
    cout << "Nhap chuoi S2: ";
    getline(cin, S2);
    if (S1.find(S2) != string::npos) {
        cout << "S1 chua S2" << endl;
    } else {
        cout << "S1 khong chua S2" << endl;
    }
    return 0;
}
V) Struct
1) Định nghĩa một cấu trúc struct trong C+ cho hình chữ nhật trong hệ tọa độ Descartes.
struct HinhChuNhat {
    double chieuDai;
    double chieuRong;
    double dienTich;
    double chuVi;
};
2) Viết hàm nhập mảng n hình chữ nhật 
void nhapMangHinhChuNhat(HinhChuNhat mangHinhChuNhat[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Nhap thong tin hinh chu nhat thu " << i + 1 << ":" << endl;
        cout << "Chieu dai: ";
        cin >> mangHinhChuNhat[i].chieuDai;
        cout << "Chieu rong: ";
        cin >> mangHinhChuNhat[i].chieuRong;
        mangHinhChuNhat[i].dienTich = mangHinhChuNhat[i].chieuDai * mangHinhChuNhat[i].chieuRong;
        mangHinhChuNhat[i].chuVi = 2 * (mangHinhChuNhat[i].chieuDai + mangHinhChuNhat[i].chieuRong);
    }
}
3) Viết hàm nhập mảng n hình tam giác 
void nhapMangHinhTamGiac(HinhTamGiac mangHinhTamGiac[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Nhap thong tin hinh tam giac thu " << i + 1 << ":" << endl;
        cout << "Canh A: ";
        cin >> mangHinhTamGiac[i].canhA;
        cout << "Canh B: ";
        cin >> mangHinhTamGiac[i].canhB;
        cout << "Canh C: ";
        cin >> mangHinhTamGiac[i].canhC;

        mangHinhTamGiac[i].chuVi = mangHinhTamGiac[i].canhA + mangHinhTamGiac[i].canhB + mangHinhTamGiac[i].canhC;
        double p = mangHinhTamGiac[i].chuVi / 2;
        mangHinhTamGiac[i].dienTich = sqrt(p * (p - mangHinhTamGiac[i].canhA) * (p - mangHinhTamGiac[i].canhB) * (p - mangHinhTamGiac[i].canhC));
    }
} 

phần thêm :
full code cho cấu trúc hình chữ nhật và hàm nhập mảng n hình chữ nhật trong C++: 
#include <iostream>
using namespace std;
struct HinhChuNhat {
    double chieuDai;
    double chieuRong;
    double dienTich;
    double chuVi;
};
void nhapMangHinhChuNhat(HinhChuNhat mangHinhChuNhat[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Nhap thong tin hinh chu nhat thu " << i + 1 << ":" << endl;
        cout << "Chieu dai: ";
        cin >> mangHinhChuNhat[i].chieuDai;
        cout << "Chieu rong: ";
        cin >> mangHinhChuNhat[i].chieuRong;
        mangHinhChuNhat[i].dienTich = mangHinhChuNhat[i].chieuDai * mangHinhChuNhat[i].chieuRong;
        mangHinhChuNhat[i].chuVi = 2 * (mangHinhChuNhat[i].chieuDai + mangHinhChuNhat[i].chieuRong);
    }
}
int main() {
    int n;
    cout << "Nhap so luong hinh chu nhat: ";
    cin >> n;
    HinhChuNhat mangHinhChuNhat[n];
    nhapMangHinhChuNhat(mangHinhChuNhat, n);
    cout << "Cac hinh chu nhat vua nhap:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Hinh chu nhat " << i + 1 << ":" << endl;
        cout << "Chieu dai: " << mangHinhChuNhat[i].chieuDai << endl;
        cout << "Chieu rong: " << mangHinhChuNhat[i].chieuRong << endl;
        cout << "Dien tich: " << mangHinhChuNhat[i].dienTich << endl;
        cout << "Chu vi: " << mangHinhChuNhat[i].chuVi << endl;
    }
    return 0;
}

