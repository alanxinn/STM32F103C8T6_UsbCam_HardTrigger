# STM32F103C8T6_UsbCam_HardTrigger
USB相机硬触发测试（未完善）

2022.12.18    实现按键外部中断控制LED

2022.12.19    实现按键外部中断控制相机硬触发（LED亮表示PA6输出PWM，LED灭表示PA6输出高电平3.3V）
              多次按键发现偶尔出现  LED灭  PA6电压为0V
