;----------------------------------------------------------------------------
; 4 GPU History Lines
;----------------------------------------------------------------------------
;----------------------------------------------------------------------------
; Usage
;----------------------------------------------------------------------------

;----------------------------------------------------------------------------
; GPU1
;----------------------------------------------------------------------------
[GPU1UsageLine]
Meter=Line
MeasureName=MSIABGPU1Usage
X=30
Y=5r
H=44
W=240
LineCount=1
LineColor=FF00FF
AntiAlias=#AA#

;----------------------------------------------------------------------------
; GPU2
;----------------------------------------------------------------------------
[GPU1UsageLine]
Meter=Line
MeasureName=MSIABGPU2Usage
X=30
Y=0r
H=44
W=240
LineCount=1
LineColor=00FFFF
AntiAlias=#AA#

;----------------------------------------------------------------------------
; GPU3
;----------------------------------------------------------------------------
[GPU1UsageLine]
Meter=Line
MeasureName=MSIABGPU3Usage
X=30
Y=0r
H=44
W=240
LineCount=1
LineColor=FFFF00
AntiAlias=#AA#

;----------------------------------------------------------------------------
; GPU4
;----------------------------------------------------------------------------
[GPU1UsageLine]
Meter=Line
MeasureName=MSIABGPU4Usage
X=30
Y=0r
H=44
W=240
LineCount=1
LineColor=00FF00
AntiAlias=#AA#

;----------------------------------------------------------------------------
; Usage String
;----------------------------------------------------------------------------
[GPUUsageLineString]
Meter=STRING
X=30
Y=0r
FontColor=#font1_colour#
FontSize=8
FontFace=#font1_name#
StringEffect=Border
FontEffectColor=000000
AntiAlias=#AA#
Text="Usage"

;============================================================================
; Separator
;============================================================================

[Spacer5]
Meter=IMAGE
SolidColor=#colour6#
X=26
Y=50r
H=1
W=(#WIDTH# - 26)
UpdateDivider=3600

;----------------------------------------------------------------------------
; Temperature
;----------------------------------------------------------------------------

;----------------------------------------------------------------------------
; GPU1
;----------------------------------------------------------------------------
[GPU1TempLine]
Meter=Line
MeasureName=MSIABGPU1Temperature
X=30
Y=5r
H=44
W=240
LineCount=1
LineColor=FF00FF
AntiAlias=#AA#

;----------------------------------------------------------------------------
; GPU2
;----------------------------------------------------------------------------
[GPU1TempLine]
Meter=Line
MeasureName=MSIABGPU2Temperature
X=30
Y=0r
H=44
W=240
LineCount=1
LineColor=00FFFF
AntiAlias=#AA#

;----------------------------------------------------------------------------
; GPU3
;----------------------------------------------------------------------------
[GPU1TempLine]
Meter=Line
MeasureName=MSIABGPU3Temperature
X=30
Y=0r
H=44
W=240
LineCount=1
LineColor=FFFF00
AntiAlias=#AA#

;----------------------------------------------------------------------------
; GPU4
;----------------------------------------------------------------------------
[GPU1TempLine]
Meter=Line
MeasureName=MSIABGPU4Temperature
X=30
Y=0r
H=44
W=240
LineCount=1
LineColor=00FF00
AntiAlias=#AA#

;----------------------------------------------------------------------------
; Temperature String
;----------------------------------------------------------------------------
[GPUTempLineString]
Meter=STRING
X=30
Y=0r
FontColor=#font1_colour#
FontSize=8
FontFace=#font1_name#
StringEffect=Border
FontEffectColor=000000
AntiAlias=#AA#
Text="Temperature"

;============================================================================
; Separator
;============================================================================

[Spacer3]
Meter=IMAGE
SolidColor=#colour6#
X=26
Y=50r
H=1
W=(#WIDTH# - 26)
UpdateDivider=3600

;----------------------------------------------------------------------------
; Fan Speed
;----------------------------------------------------------------------------

;----------------------------------------------------------------------------
; GPU1
;----------------------------------------------------------------------------
[GPU1FanLine]
Meter=Line
MeasureName=MSIABGPU1FanSpeed
X=30
Y=5r
H=44
W=240
LineCount=1
LineColor=FF00FF
AntiAlias=#AA#

;----------------------------------------------------------------------------
; GPU2
;----------------------------------------------------------------------------
[GPU1FanLine]
Meter=Line
MeasureName=MSIABGPU2FanSpeed
X=30
Y=0r
H=44
W=240
LineCount=1
LineColor=00FFFF
AntiAlias=#AA#

;----------------------------------------------------------------------------
; GPU3
;----------------------------------------------------------------------------
[GPU1FanLine]
Meter=Line
MeasureName=MSIABGPU3FanSpeed
X=30
Y=0r
H=44
W=240
LineCount=1
LineColor=FFFF00
AntiAlias=#AA#

;----------------------------------------------------------------------------
; GPU4
;----------------------------------------------------------------------------
[GPU1FanLine]
Meter=Line
MeasureName=MSIABGPU4FanSpeed
X=30
Y=0r
H=44
W=240
LineCount=1
LineColor=00FF00
AntiAlias=#AA#

;----------------------------------------------------------------------------
; FanSpeed String
;----------------------------------------------------------------------------
[GPUFanLineString]
Meter=STRING
X=30
Y=0r
FontColor=#font1_colour#
FontSize=8
FontFace=#font1_name#
StringEffect=Border
FontEffectColor=000000
AntiAlias=#AA#
Text="Fan Speed"

;============================================================================
; Separator
;============================================================================

[Spacer4]
Meter=IMAGE
SolidColor=#colour6#
X=26
Y=50r
H=1
W=(#WIDTH# - 26)
UpdateDivider=3600

;----------------------------------------------------------------------------
; MemoryUsage
;----------------------------------------------------------------------------

;----------------------------------------------------------------------------
; GPU1
;----------------------------------------------------------------------------
[GPU1MemUsageLine]
Meter=Line
MeasureName=MSIABGPU1MemoryUsage
X=30
Y=5r
H=44
W=240
LineCount=1
LineColor=FF00FF
AntiAlias=#AA#

;----------------------------------------------------------------------------
; GPU2
;----------------------------------------------------------------------------
[GPU1MemUsageLine]
Meter=Line
MeasureName=MSIABGPU2MemoryUsage
X=30
Y=0r
H=44
W=240
LineCount=1
LineColor=00FFFF
AntiAlias=#AA#

;----------------------------------------------------------------------------
; GPU3
;----------------------------------------------------------------------------
[GPU1MemUsageLine]
Meter=Line
MeasureName=MSIABGPU3MemoryUsage
X=30
Y=0r
H=44
W=240
LineCount=1
LineColor=FFFF00
AntiAlias=#AA#

;----------------------------------------------------------------------------
; GPU4
;----------------------------------------------------------------------------
[GPU1MemUsageLine]
Meter=Line
MeasureName=MSIABGPU4MemoryUsage
X=30
Y=0r
H=44
W=240
LineCount=1
LineColor=00FF00
AntiAlias=#AA#

;----------------------------------------------------------------------------
; MemoryUsage String
;----------------------------------------------------------------------------
[GPUMemUsageLineString]
Meter=STRING
X=30
Y=0r
FontColor=#font1_colour#
FontSize=8
FontFace=#font1_name#
StringEffect=Border
FontEffectColor=000000
AntiAlias=#AA#
Text="MemoryUsage"

;============================================================================
; Separator
;============================================================================

[Spacer2]
Meter=IMAGE
SolidColor=#colour6#
X=26
Y=50r
H=1
W=(#WIDTH# - 26)
UpdateDivider=3600
