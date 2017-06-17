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
