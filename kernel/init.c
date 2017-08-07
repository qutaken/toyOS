#include "init.h"
#include "print.h"
#include "interrupt.h"
#include "timer.h"
#include "memory.h"

void init_all() {
    put_str("init_all\n");
    idt_init(); // 初始化中断
    timer_init(); // 初始化定时器8253
    mem_init(); // 初始化内存池管理
}