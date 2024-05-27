#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
int luachonMenu;
printf("=== Menu ===\n\n");
printf("1. Pho\n");
printf("2. Bun bo Hue\n");
printf("3. Mi Quang\n");
printf("4. Thit cay\n");
printf("\nLua chon cua ban ? ");
scanf("%d", &luachonMenu);
printf("\n");
switch (luachonMenu)
{
case 1:
printf("Ban da chon Pho. Lua chon tuyet voi !");
break;
case 2:
printf("Ban da chon Bun bo Hue. Lua chon chinh xac !");
break;
case 3:
printf("Ban da chon Mi Quang. Qua tuyet !");
break;
case 4:
printf("Ban da chon Thit cay. Hay den quan nhau !");
break;
default:
printf("Ban da khong nhap dung so can thiet, ban khong duoc an gi het !");
break;
}
printf("\n\n");
return 0;
}
