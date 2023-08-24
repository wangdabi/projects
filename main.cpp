
#include <cstdio>
#include <windows.h>
//歌词翻译来自music.163.com（网抑云音乐）

// l前缀低音，h前缀高音
#define qd 262
#define qr 294 
#define qm 330
#define qf 349
#define qs 392//这不是命令！
#define ql 440 // 区分l和1
#define qsi 494
#define d 523
#define r 587
#define m 659
#define f 698
#define s 784
#define l 880
#define si 988
#define hd 1047//别想歪了，一点也不高清，全笋音质
#define hr 1175
#define hm 1319//不是蛤蟆！
#define hf 1397//合法倒是挺合法的
#define hs 1568
#define hl 1760
#define hsi 1967

#define one 60000/150
/*↑这个macro的算式代表一个四分音符的时间，换歌谱时记得改这里的150
* 60000/150代表每分钟运行150个音符
* 科普：宏是一种定义方式，可以定义简单函数和常量
* 现在这两个功能被函数定义+const关键字取代
* 话虽如此，但是U1S1，这个东东还挺省事的*/

#define p(hz,ms) Beep(hz,ms);//为简化代码（有些乐谱很长）
#define sl(ms) Sleep(ms);


int main()
{
    //要换成别的歌谱？只需要推翻main函数！
    for(int i=0;i<2;i++){
    p(hd,one/2);p(hr,one/2);p(hm,one);p(hd,one/2);p(l,one/2);sl(one);
    p(hr,one);p(si,one);p(s,one/2);p(m,one/2);sl(one);
    p(si,one);p(l,one);p(s,one/2);p(d,one/2);sl(one);
    p(s,one);p(m,one);sl(one*2);//夢ならばどれほどよかったでしょう
    p(r,one/2);p(m,one/2);p(f,one*2);
    p(hd,one);p(si,one/2);p(hd,one/2);p(s,one*2);
    p(f,one);p(m,one);p(f,one*2);
    p(hd,one);p(si,one/2);p(l,one/2);p(s,one*3);//未だにあなたのことを夢にみる
    p(hd,one/2);p(hr,one/2);p(m,one);p(hd,one/2);p(l,one/2);sl(one);
    p(hr,one);p(si,one);p(s,one/2);p(m,one/2);sl(one);
    p(si,one);p(l,one);p(s,one/2);p(d,one/2);sl(one);
    p(s,one);p(m,one);sl(one*2);//忘れた物を取りに帰るように
    p(r,one/2);p(m,one/2);p(f,one*2);
    p(s,one);p(f,one/2);p(s,one/2);p(m,one);p(s,one);p(hd,one);p(hm,one);
    p(hr,one*1.5);p(hr,one/2);p(hr,one*1.5);p(hd,one/2);p(hd,one*4);
    //古びた思い出の埃を払う
    //下面再重复一次（有反复记号，在第一页的最后一行
     p(hd,one/2);p(hr,one/2);p(hm,one);p(hd,one/2);p(l,one/2);sl(one);
    p(hr,one);p(si,one);p(s,one/2);p(m,one/2);sl(one);
    p(si,one);p(l,one);p(s,one/2);p(d,one/2);sl(one);
    p(s,one);p(m,one);sl(one*2);//夢ならばどれほどよかったでしょう
    p(r,one/2);p(m,one/2);p(f,one*2);
    p(hd,one);p(si,one/2);p(hd,one/2);p(s,one*2);
    p(f,one);p(m,one);p(f,one*2);
    p(hd,one);p(si,one/2);p(l,one/2);p(s,one*3);//未だにあなたのことを夢にみる
    p(hd,one/2);p(hr,one/2);p(m,one);p(hd,one/2);p(l,one/2);sl(one);
    p(hr,one);p(si,one);p(s,one/2);p(m,one/2);sl(one);
    p(si,one);p(l,one);p(s,one/2);p(d,one/2);sl(one);
    p(s,one);p(m,one);sl(one*2);//忘れた物を取りに帰るように
    p(r,one/2);p(m,one/2);p(f,one*2);
    p(s,one);p(f,one/2);p(s,one/2);p(m,one);p(s,one);p(hd,one);p(hm,one);
    p(hr,one*1.5);p(hr,one/2);p(hr,one*1.5);p(hd,one/2);p(hd,one*4);
//--------------分界线---------------------
    p(l,one*1.5);p(si,one/2);p(hd,one);p(si,one/2);p(l,one/2);p(s,one);p(hm,one);p(hm,one);sl(one);
    p(hr,one*1.5);p(hm,one/2);p(hf,one);p(hm,one/2);p(hr,one/2);p(hd,one);p(hr,one);p(s,one);
    sl(one);//きっともうこれ以上 傷つくことなど
    p(f,one*1.5);p(s,one/2);p(l,one);p(s,one/2);p(f,one/2);p(m,one);
    p(s,one);p(hd,one);p(hd,one);p(si,one*1.5);p(si,one/2);p(l,one*1.5);
    p(si,one/2);p(hd,one*2);

    p(hr,one/2);p(hm,one/2);p(hr,one/2);p(hd,one/2);p(l,one/2);p(hd,one/2);sl(one);
    p(hm,one/2);p(hs,one/2);sl(one);p(hr,one/2);p(hd,one/2);sl(one);
    p(hd,one/2*1.5);p(hd,one/4);p(hr,one/2);p(hm,one/2);p(hf,one);p(hm,one);p(hr,one);p(si,one);p(hd,one*4);

    p(hd,one/2);p(si,one/2);p(l,one);p(si,one);p(hd,one);p(hr,one);p(hd,one);p(s,one);
    p(hd,one);p(hr,one);p(hm,one);p(hf,one);p(hr,one*1.5);p(hd,one/2);p(hd,one*4);

    }
    return 0;
}