;============================================================================
; Measures
; GPU SourceId list
;	GPU_TEMPERATURE	0	The data source for the GPU temperature.
;	PCB_TEMPERATURE	1	The data source for the printed circuit board (PCB) temperature.
;	FAN_SPEED		16	The data source for the fan speed.
;	FAN_TACHOMETER	17	The data source for the fan tachometer.
;	CORE_CLOCK		32	The data source for the core clock speed.
;	SHADER_CLOCK	33	The data source for the shader clock speed.
;	MEMORY_CLOCK	34	The data source for the memory clock speed.
;	GPU_USAGE		48	The data source for the GPU usage.
;	MEMORY_USAGE	49	The data source for the memory usage.
;	GPU_VOLTAGE		64	The data source for the GPU voltage.
;	AUX_VOLTAGE		65	The data source for the auxilary voltage.
;	MEMORY_VOLTAGE	66	The data source for the memory voltage.
;	FRAMERATE		80	The data source for the framerate.
;============================================================================

;----------------------------------------------------------------------------
; GPU1
;----------------------------------------------------------------------------

[MSIABGPU1Name]
Measure=Plugin
Plugin=#MSIABLOCATION#
GPU=0
GPUDescriptor=DisplayName
UpdateDivider=3600

[MSIABGPU1Family]
Measure=Plugin
Plugin=#MSIABLOCATION#
GPU=0
GPUDescriptor=Family
UpdateDivider=3600

[MSIABGPU1CoreClock]
Measure=Plugin
Plugin=#MSIABLOCATION#
GPU=0
SourceId=32

[MSIABGPU1ShaderClock]
Measure=Plugin
Plugin=#MSIABLOCATION#
GPU=0
SourceId=33

[MSIABGPU1MemoryClock]
Measure=Plugin
Plugin=#MSIABLOCATION#
GPU=0
SourceId=34

[MSIABGPU1Voltage]
Measure=Plugin
Plugin=#MSIABLOCATION#
GPU=0
SourceId=64

[MSIABGPU1MemoryVoltage]
Measure=Plugin
Plugin=#MSIABLOCATION#
GPU=0
SourceId=66

[MSIABGPU1Framerate]
Measure=Plugin
Plugin=#MSIABLOCATION#
GPU=0
SourceId=80

[MSIABGPU1Usage]
Measure=Plugin
Plugin=#MSIABLOCATION#
GPU=0
SourceId=48
MinValue=0
MaxValue=100

[MSIABGPU1MemoryUsage]
Measure=Plugin
Plugin=#MSIABLOCATION#
GPU=0
SourceId=49
MinValue=0
MaxValue=#VIDEOMEM#

[MSIABGPU1Temperature]
Measure=Plugin
Plugin=#MSIABLOCATION#
GPU=0
SourceId=0
MinValue=0
MaxValue=100

[MSIABGPU1FanSpeed]
Measure=Plugin
Plugin=#MSIABLOCATION#
GPU=0
SourceId=16
MinValue=0
MaxValue=100

[MSIABGPU1FanRPM]
Measure=Plugin
Plugin=#MSIABLOCATION#
GPU=0
SourceId=17
MinValue=0
MaxValue=100

;----------------------------------------------------------------------------
; GPU2
;----------------------------------------------------------------------------

[MSIABGPU2Name]
Measure=Plugin
Plugin=#MSIABLOCATION#
GPU=1
GPUDescriptor=DisplayName
UpdateDivider=3600

[MSIABGPU2Family]
Measure=Plugin
Plugin=#MSIABLOCATION#
GPU=1
GPUDescriptor=Family
UpdateDivider=3600

[MSIABGPU2CoreClock]
Measure=Plugin
Plugin=#MSIABLOCATION#
GPU=1
SourceId=32

[MSIABGPU2ShaderClock]
Measure=Plugin
Plugin=#MSIABLOCATION#
GPU=1
SourceId=33

[MSIABGPU2MemoryClock]
Measure=Plugin
Plugin=#MSIABLOCATION#
GPU=1
SourceId=34

[MSIABGPU2Voltage]
Measure=Plugin
Plugin=#MSIABLOCATION#
GPU=1
SourceId=64

[MSIABGPU2MemoryVoltage]
Measure=Plugin
Plugin=#MSIABLOCATION#
GPU=1
SourceId=66

[MSIABGPU2Framerate]
Measure=Plugin
Plugin=#MSIABLOCATION#
GPU=1
SourceId=80

[MSIABGPU2Usage]
Measure=Plugin
Plugin=#MSIABLOCATION#
GPU=1
SourceId=48
MinValue=0
MaxValue=100

[MSIABGPU2MemoryUsage]
Measure=Plugin
Plugin=#MSIABLOCATION#
GPU=1
SourceId=49
MinValue=0
MaxValue=#VIDEOMEM#

[MSIABGPU2Temperature]
Measure=Plugin
Plugin=#MSIABLOCATION#
GPU=1
SourceId=0
MinValue=0
MaxValue=100

[MSIABGPU2FanSpeed]
Measure=Plugin
Plugin=#MSIABLOCATION#
GPU=1
SourceId=16
MinValue=0
MaxValue=100

[MSIABGPU2FanRPM]
Measure=Plugin
Plugin=#MSIABLOCATION#
GPU=1
SourceId=17
MinValue=0
MaxValue=100

;----------------------------------------------------------------------------
; GPU3
;----------------------------------------------------------------------------

[MSIABGPU3Name]
Measure=Plugin
Plugin=#MSIABLOCATION#
GPU=2
GPUDescriptor=DisplayName
UpdateDivider=3600

[MSIABGPU3Family]
Measure=Plugin
Plugin=#MSIABLOCATION#
GPU=2
GPUDescriptor=Family
UpdateDivider=3600

[MSIABGPU3CoreClock]
Measure=Plugin
Plugin=#MSIABLOCATION#
GPU=2
SourceId=32

[MSIABGPU3ShaderClock]
Measure=Plugin
Plugin=#MSIABLOCATION#
GPU=2
SourceId=33

[MSIABGPU3MemoryClock]
Measure=Plugin
Plugin=#MSIABLOCATION#
GPU=2
SourceId=34

[MSIABGPU3Voltage]
Measure=Plugin
Plugin=#MSIABLOCATION#
GPU=2
SourceId=64

[MSIABGPU3MemoryVoltage]
Measure=Plugin
Plugin=#MSIABLOCATION#
GPU=2
SourceId=66

[MSIABGPU3Framerate]
Measure=Plugin
Plugin=#MSIABLOCATION#
GPU=2
SourceId=80

[MSIABGPU3Usage]
Measure=Plugin
Plugin=#MSIABLOCATION#
GPU=2
SourceId=48
MinValue=0
MaxValue=100

[MSIABGPU3MemoryUsage]
Measure=Plugin
Plugin=#MSIABLOCATION#
GPU=2
SourceId=49
MinValue=0
MaxValue=#VIDEOMEM#

[MSIABGPU3Temperature]
Measure=Plugin
Plugin=#MSIABLOCATION#
GPU=2
SourceId=0
MinValue=0
MaxValue=100

[MSIABGPU3FanSpeed]
Measure=Plugin
Plugin=#MSIABLOCATION#
GPU=2
SourceId=16
MinValue=0
MaxValue=100

[MSIABGPU3FanRPM]
Measure=Plugin
Plugin=#MSIABLOCATION#
GPU=2
SourceId=17
MinValue=0
MaxValue=100

;----------------------------------------------------------------------------
; GPU4
;----------------------------------------------------------------------------

[MSIABGPU4Name]
Measure=Plugin
Plugin=#MSIABLOCATION#
GPU=3
GPUDescriptor=DisplayName
UpdateDivider=3600

[MSIABGPU4Family]
Measure=Plugin
Plugin=#MSIABLOCATION#
GPU=3
GPUDescriptor=Family
UpdateDivider=3600

[MSIABGPU4CoreClock]
Measure=Plugin
Plugin=#MSIABLOCATION#
GPU=3
SourceId=32

[MSIABGPU4ShaderClock]
Measure=Plugin
Plugin=#MSIABLOCATION#
GPU=3
SourceId=33

[MSIABGPU4MemoryClock]
Measure=Plugin
Plugin=#MSIABLOCATION#
GPU=3
SourceId=34

[MSIABGPU4Voltage]
Measure=Plugin
Plugin=#MSIABLOCATION#
GPU=3
SourceId=64

[MSIABGPU4MemoryVoltage]
Measure=Plugin
Plugin=#MSIABLOCATION#
GPU=3
SourceId=66

[MSIABGPU4Framerate]
Measure=Plugin
Plugin=#MSIABLOCATION#
GPU=3
SourceId=80

[MSIABGPU4Usage]
Measure=Plugin
Plugin=#MSIABLOCATION#
GPU=3
SourceId=48
MinValue=0
MaxValue=100

[MSIABGPU4MemoryUsage]
Measure=Plugin
Plugin=#MSIABLOCATION#
GPU=3
SourceId=49
MinValue=0
MaxValue=#VIDEOMEM#

[MSIABGPU4Temperature]
Measure=Plugin
Plugin=#MSIABLOCATION#
GPU=3
SourceId=0
MinValue=0
MaxValue=100

[MSIABGPU4FanSpeed]
Measure=Plugin
Plugin=#MSIABLOCATION#
GPU=3
SourceId=16
MinValue=0
MaxValue=100

[MSIABGPU4FanRPM]
Measure=Plugin
Plugin=#MSIABLOCATION#
GPU=3
SourceId=17
MinValue=0
MaxValue=100
