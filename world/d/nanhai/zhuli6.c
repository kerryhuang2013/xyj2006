// Room: /d/nanhai/zhulin
inherit ROOM;

void create ()
{
  set ("short", "紫竹林");
  set ("long", @LONG

普陀后山的紫竹林。也是观音菩萨闲憩常到的所在。紫竹细疏，
清风微拂。漫步于此，世事之纷扰顿时烟消云散。往北似有一
小池塘。
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "northeast" : __DIR__"zhuli"+sprintf("%d",random(5)),
  "northwest" : __DIR__"zhuli"+sprintf("%d",random(7)),
  "southeast" : __DIR__"zhuli0",
  "southwest" : __DIR__"zhuli"+sprintf("%d",random(7)),
]));
  setup();
  replace_program(ROOM);
}
