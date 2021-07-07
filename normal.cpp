#include <allegro.h>
#include <iostream>
#include "main.hpp"

//tutaj w void  bitmapy bez null
//tutaj w void  bitmapy bez null

void normal()
{



    bufor=create_bitmap(700, 700);


	muzyka = load_sample("muzyka.wav");
	play_sample( muzyka, 255, 127, 1000, 1 );
	//G£ÓWNA PÊTLA!

	start = load_bmp("poczatek.bmp", default_palette);
	start2 = load_bmp("poczatek2.bmp", default_palette);
	start3 = load_bmp("poczatek3.bmp", default_palette);
	mapa = load_bmp("mapa.bmp", default_palette);
	fabula1 = load_bmp("1.bmp", default_palette);
	fabula2 = load_bmp("2.bmp", default_palette);
	fabula3 = load_bmp("3.bmp", default_palette);
	fabula4 = load_bmp("4.bmp", default_palette);
	std::cout << "dziala 5 \n";
	blit(start,screen,0,0,0,0,700,700);
	rest(3000);
	blit(start3,screen,0,0,0,0,700,700);
	std::cout << "dziala 5 \n";
	rest(4000);
	blit(start2,screen,0,0,0,0,700,700);
	std::cout << "dziala 6 \n";
c:
    readkey();
    if(key[KEY_A]){
    obj1 = load_bmp("sd1.bmp", default_palette);
	obj2 = load_bmp("sd2.bmp", default_palette);
	obj1_1 = load_bmp("sd1tyl.bmp", default_palette);
	obj2_2 = load_bmp("sd2tyl.bmp", default_palette);
	rest(1000);
	stop_sample(muzyka);
	muzyka2 = load_sample("muzyka2.wav");
	play_sample(muzyka2,255,127,1000,1);

    blit(fabula1,screen,0,0,0,0,700,700);
	rest(5000);
	blit(fabula2,screen,0,0,0,0,700,700);
	rest(5000);
	blit(fabula3,screen,0,0,0,0,700,700);
	rest(5000);
	blit(fabula4,screen,0,0,0,0,700,700);
    readkey();
    destroy_bitmap(fabula1);
	destroy_bitmap(fabula2);
	destroy_bitmap(fabula3);
	destroy_bitmap(fabula4);
	stop_sample(muzyka2);
	destroy_sample(muzyka2);
	muzyka1 = load_sample("muzyka1.wav");
	play_sample(muzyka1,255,127,1000,1);
    }
    else if(!key[KEY_A])
    goto c;
/*
    else if(key[KEY_D]){
    obj1n = load_bmp("st1.bmp", default_palette);
    obj2n = load_bmp("st2.bmp", default_palette);
    rest(1000);

    stop_sample(muzyka);
	destroy_sample(muzyka);
	muzyka2 = load_sample("muzyka2.wav");
	play_sample(muzyka2,255,127,1000,1);

    blit(fabula1,screen,0,0,0,0,700,700);
	rest(5000);
	blit(fabula2,screen,0,0,0,0,700,700);
	rest(5000);
	blit(fabula3,screen,0,0,0,0,700,700);
	rest(5000);
	blit(fabula4,screen,0,0,0,0,700,700);

    readkey();
    destroy_bitmap(fabula1);
	destroy_bitmap(fabula2);
	destroy_bitmap(fabula3);
	destroy_bitmap(fabula4);
	stop_sample(muzyka2);
	destroy_sample(muzyka2);
	muzyka1 = load_sample("muzyka1.wav");
	play_sample(muzyka1,255,127,1000,1);

    }
*/
        juz == true;
}

void normal_end()
{
    destroy_bitmap(bufor);
    destroy_bitmap(obj1);
	destroy_bitmap(obj2);
	destroy_bitmap(obj1_1);
	destroy_bitmap(obj2_2);
	destroy_sample(muzyka);
	destroy_sample(muzyka1);
	destroy_sample(muzyka2);
	destroy_bitmap(start);
	destroy_bitmap(start2);
    destroy_bitmap(start3);
    destroy_bitmap(mapa);
    destroy_bitmap(fabula1);
    destroy_bitmap(fabula2);
	destroy_bitmap(fabula3);
	destroy_bitmap(fabula4);


}

