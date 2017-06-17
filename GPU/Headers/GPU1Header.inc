;------------------------------------------------------------
; Headers
;------------------------------------------------------------

;------------------------------------------------------------
; GPU1 Headers
;------------------------------------------------------------
; GPU1 Name
;------------------------------------------------------------

[GPU1NameString]
Meter=STRING
MeasureName=MSIABGPU1Name
X=30
Y=5
FontColor=#font1_colour#
FontSize=8
FontFace=#font1_name#
StringStyle=Bold
AntiAlias=#AA#
UpdateDivider=3600
Text="GPU1 %1"

;------------------------------------------------------------
; GPU1 Clock Rate
;------------------------------------------------------------

[GPU1ClockRate]
Meter=STRING
MeasureName=MSIABGPU1CoreClock
X=0r
Y=15r
FontColor=#font1_colour#
FontSize=8
FontFace=#font1_name#
AntiAlias=#AA#
Text="Clock: %1 MHz"

;------------------------------------------------------------
; GPU1 Memory Clock Rate
;------------------------------------------------------------

[GPU1MemoryClockRate]
Meter=STRING
MeasureName=MSIABGPU1MemoryClock
X=0r
Y=15r
FontColor=#font1_colour#
FontSize=8
FontFace=#font1_name#
AntiAlias=#AA#
Text="Memory Clock: %1 MHz"

;------------------------------------------------------------
; GPU1 Memory Usage
;------------------------------------------------------------

[GPU1MemoryUsage]
Meter=STRING
MeasureName=MSIABGPU1MemoryUsage
X=0r
Y=15r
FontColor=#font1_colour#
FontSize=8
FontFace=#font1_name#
AntiAlias=#AA#
Text="Memory Usage: %1MB of #VIDEOMEM#MB"
