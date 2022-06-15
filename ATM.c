#include<stdio.h>

int main()
{
int cardid, pin;
int socase;
int SoTienrut;
int SoTienChuyen;
char YN; // Bài toán ATM
  // Ncập cây số 1, 2 3
    printf("Nhâp ID \n");
  "%d", &cardid);
   printf("Nhâp mã Pin \n");
        scanf("%d", &pin);
if (cardid ==99 && pin ==66)
{
    printf("Nhập vào lựa chọn cây:\n  1- Rút tiền \n \t 2- Chuyển khoản \n \t 3- Chuyển khoản \n \t 4- kết thúc");
    scanf("%d", &socase);
    printf("Bạn đã chọn số %d \n", socase);
     
    do
    {
        
        switch (socase)
        {
        case 1:
            printf("Bạn đã chọn rút tiền, đề nghị bạn chọn số tiền cần rút \n");\
            scanf("%d", &SoTienrut);
            break;
        case 2:
            /* code */
        printf("Bạn đã chọn rút tiền, đề nghị bạn chọn số tiền cần rút \n");\
            scanf("%d", &SoTienrut);
            break;
        
        case 3:
            /* code */
        printf("Bạn đã chọn chuyển khoản, nhập số tiền cần chuyển khoản, số tiền cần chuyển khoản vào đây   \n");
            scanf("%d", &SoTienChuyen );
            printf("Bạn đã chọn chuyển khoản thành công. Xin cảm ơn!  \n");
            break;



        default: // Mặc định kết thúc quá trình rút tiền
            printf("kêt thúc quá trình rút tiền \n");
            break;
        }

       printf("Bạn có msốn tiếp tục?Y/N");
       fflush(stdin);
        scanf ("%c", &YN);
    } while (YN== 'y' || YN == 'Y');
}
   else     
       {
        printf("Thông tin bạn nhập không hợp lệ, đề nghị nhập lại \n");
 
       
        }
   
    
	//getch();
	return 0;



}