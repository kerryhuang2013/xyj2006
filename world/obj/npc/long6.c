//®ɽ������
//lestat for dtxy 2001
//����
 
#include <ansi.h>
inherit NPC;
void create()
{
   set_name(BLU"����"NOR, ({"lan long", "lan", "long"}));
   set("age", 500);
   set("long", "һֻģ���ߴ󣬼������Ƶ�����\n");
   set("str", 100);
   set("cor", 40);
   set("con", 40);
   set("cps", 40);
   set("spi", 40);
   set("int", 40);
   set_temp("apply/damage", 150);
   set_temp("apply/armor", 800);
   set("max_kee", 5200);
   set("max_sen", 5200);
   set("force", 14000);
   set("max_force", 7000);
   set("force_factor", 350);
   set("mana", 14000);
   set("max_mana", 7000);
   set("mana_factor", 350);
   set_skill("unarmed", 450+random(50));
   set_skill("parry", 450+random(50));
   set_skill("dragonfight", 450+random(50));
   set_skill("dragonstep", 450);
   map_skill("unarmed", "dragonfight");
   map_skill("dodge", "dragonstep");
   set("combat_exp", 40000000);
   set_weight(900000);
   setup();
}
