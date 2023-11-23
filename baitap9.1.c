#include<stdio.h>
int main(){
	int arr[100], i, j, n, sum, max, min, count, pos, val, choice, flag;
	printf("MENU\n");
	printf("1. Nhap so phan tu can nhap va gia tri cac phan tu\n");
	printf("2. in ra cac gia tri phan tu dang quan ly\n");
	printf("3. in ra cac gia tri chan va tinh tong\n");
	printf("4. in ra gia tri lon nhat la nho nhat trong bang\n");
	printf("5. in ra cac phan tu la so nguyen to trong bang va tinh tong\n");
	printf("6. nhap vao 1 so va thong ke trong mang co bao nhieu phan tu co gia tri nhu vay?\n");
	printf("7. them mot phan tu va vi tri chi dinh\n");
do
    {
        printf("\nNhap lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Nhap so phan tu: ");
            scanf("%d", &n);

            printf("Nhap cac gia tri phan tu:\n");
            for (i = 0; i < n; i++)
            {
                scanf("%d", &arr[i]);
            }
            break;

        case 2:
            printf("Cac phan tu trong quan ly la: ");
            for (i = 0; i < n; i++)
            {
                printf("%d ", arr[i]);
            }
            break;

        case 3:
            printf("Cac phan tu trong mang la: ");
            for (i = 0; i < n; i++)
            {
                if (arr[i] % 2 == 0)
                {
                    printf("%d ", arr[i]);
                    sum += arr[i];
                }
            }
            printf("\nTong cac phan tu chan la: %d", sum);
            break;

        case 4:
            max = arr[0];
            min = arr[0];
            for (i = 1; i < n; i++)
            {
                if (arr[i] > max)
                {
                    max = arr[i];
                }
                if (arr[i] < min)
                {
                    min = arr[i];
                }
            }
            printf("max trong bang la: %d\n", max);
            printf("min trong mang la: %d", min);
            break;

        case 5:
            printf("Cac phan tu la so nguyen to trong bang la: ");
            for (i = 0; i < n; i++)
            {
                flag = 0;
                for (int j = 2; j <= arr[i] / 2; j++)
                {
                    if (arr[i] % j == 0)
                    {
                        flag = 1;
                        break;
                    }
                }
                if (flag == 0 && arr[i] != 1)
                {
                    printf("%d ", arr[i]);
                    sum += arr[i];
                }
            }
            printf("\nTong cac phan tu so nguyen to la: %d", sum);
            break;

        case 6:
            printf("Nhap gia tri can thong ke: ");
            scanf("%d", &val);

            for (i = 0; i < n; i++)
            {
                if (arr[i] == val)
                {
                    count++;
                }
            }
            printf("Co %d phan tu trong gia tri %d", count, val);
            break;

        case 7:
                printf("\nNhap vi tri muon chen: ");
                scanf("%d", &pos);

                printf("Nhap gia tri muon chen: ");
                scanf("%d", &val);

                for (i = n - 1; i >= pos - 1; i--)
                {
                    arr[i + 1] = arr[i];
                }

                arr[pos - 1] = val;
                n++;

                printf("\nPhan tu duoc chen thanh cong!\n");
                break;

            case 8:
                printf("\nEnd.\n");
                break;

            default:
                printf("\nLua chon khong hop le vui long chon lai.\n");
        }
    } while (choice != 8);

    return 0;
}