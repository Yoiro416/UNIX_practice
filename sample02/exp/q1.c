#include <stdio.h>
#include <unistd.h>

int main(int argc,char **argv)
{
    write(1,"hogehoge\n",9);//hogehoge
    close(1);
    write(1,"hogehoge\n",9);//
    return 0;
    //1回目のwriteでは文字列が出力されたが、closeで標準入出力をcloseした後の2回目の実行では何も表示されなかった。
}