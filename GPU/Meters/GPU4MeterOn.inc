;============================================================================
; GPU1 Meter
;============================================================================

[GPU1UsageString]
Meter=STRING
X=30
Y=15r
FontColor=#font1_colour#
FontSize=8
FontFace=#font1_name#
StringEffect=Border
FontEffectColor=000000
AntiAlias=#AA#
Text="GPU 1"

[GPU1PercentageString]
Meter=STRING
MeasureName=MSIABGPU1Usage
X=242
Y=0r
FontColor=#font1_colour#
FontSize=8
FontFace=#font1_name#
StringEffect=Border
FontEffectColor=000000
AntiAlias=#AA#
Text="%1%"

[GPU1UsageBarBack]
Meter=IMAGE
X=75
Y=3r
W=160
H=7
SolidColor=#colour7#
AntiAlias=#AA#
UpdateDivider=3600

[GPU1UsageBar]
Meter=BAR
MeasureName=MSIABGPU1Usage
X=0r
Y=0r
W=160
H=7
BarColor=FF00FF
BarOrientation=HORIZONTAL
AntiAlias=#AA#

;============================================================================
; GPU1 Temperature
;============================================================================

[GPU1TemperatureString]
Meter=STRING
X=30
Y=15r
FontColor=#font1_colour#
FontSize=8
FontFace=#font1_name#
StringEffect=Border
FontEffectColor=000000
AntiAlias=#AA#
Text="Temp"

[GPU1TemperatureValueString]
Meter=STRING
MeasureName=MSIABGPU1Temperature
X=242
Y=0r
FontColor=#colour11#
FontSize=8
FontFace=#font1_name#
StringEffect=Border
FontEffectColor=000000
AntiAlias=#AA#
Text="%1°C"

[GPU1TemperatureBarBack]
Meter=IMAGE
X=75
Y=3r
W=160
H=7
SolidColor=#colour7#
AntiAlias=#AA#
UpdateDivider=3600

[GPU1TemperatureBar]
Meter=BAR
MeasureName=MSIABGPU1Temperature
X=0r
Y=0r
W=160
H=7
BarColor=#colour11#
BarOrientation=HORIZONTAL
AntiAlias=#AA#

;============================================================================
; GPU1 FanSpeed
;============================================================================

[GPU1FanSpeedString]
Meter=STRING
X=30
Y=15r
FontColor=#font1_colour#
FontSize=8
FontFace=#font1_name#
StringEffect=Border
FontEffectColor=000000
AntiAlias=#AA#
Text="Fan"

[GPU1FanSpeedValueString]
Meter=STRING
MeasureName=MSIABGPU1FanSpeed
X=242
Y=0r
FontColor=#font1_colour#
FontSize=8
FontFace=#font1_name#
StringEffect=Border
FontEffectColor=000000
AntiAlias=#AA#
Text="%1%"

[GPU1FanSpeedBarBack]
Meter=IMAGE
X=75
Y=3r
W=160
H=7
SolidColor=#colour7#
AntiAlias=#AA#
UpdateDivider=3600

[GPU1FanSpeedBar]
Meter=BAR
MeasureName=MSIABGPU1FanSpeed
X=0r
Y=0r
W=160
H=7
BarColor=20A0FF
BarOrientation=HORIZONTAL
AntiAlias=#AA#

;============================================================================
; GPU2 Meter
;============================================================================

[GPU2UsageString]
Meter=STRING
X=30
Y=15r
FontColor=#font1_colour#
FontSize=8
FontFace=#font1_name#
StringEffect=Border
FontEffectColor=000000
AntiAlias=#AA#
Text="GPU 2"

[GPU2PercentageString]
Meter=STRING
MeasureName=MSIABGPU2Usage
X=242
Y=0r
FontColor=#font1_colour#
FontSize=8
FontFace=#font1_name#
StringEffect=Border
FontEffectColor=000000
AntiAlias=#AA#
Text="%1%"

[GPU2UsageBarBack]
Meter=IMAGE
X=75
Y=3r
W=160
H=7
SolidColor=#colour7#
AntiAlias=#AA#
UpdateDivider=3600

[GPU2UsageBar]
Meter=BAR
MeasureName=MSIABGPU2Usage
X=0r
Y=0r
W=160
H=7
BarColor=00FFFF
BarOrientation=HORIZONTAL
AntiAlias=#AA#

;============================================================================
; GPU2 Temperature
;============================================================================

[GPU2TemperatureString]
Meter=STRING
X=30
Y=15r
FontColor=#font1_colour#
FontSize=8
FontFace=#font1_name#
StringEffect=Border
FontEffectColor=000000
AntiAlias=#AA#
Text="Temp"

[GPU2TemperatureValueString]
Meter=STRING
MeasureName=MSIABGPU2Temperature
X=242
Y=0r
FontColor=#colour11#
FontSize=8
FontFace=#font1_name#
StringEffect=Border
FontEffectColor=000000
AntiAlias=#AA#
Text="%1°C"

[GPU2TemperatureBarBack]
Meter=IMAGE
X=75
Y=3r
W=160
H=7
SolidColor=#colour7#
AntiAlias=#AA#
UpdateDivider=3600

[GPU2TemperatureBar]
Meter=BAR
MeasureName=MSIABGPU2Temperature
X=0r
Y=0r
W=160
H=7
BarColor=#colour11#
BarOrientation=HORIZONTAL
AntiAlias=#AA#

;============================================================================
; GPU2 FanSpeed
;============================================================================

[GPU2FanSpeedString]
Meter=STRING
X=30
Y=15r
FontColor=#font1_colour#
FontSize=8
FontFace=#font1_name#
StringEffect=Border
FontEffectColor=000000
AntiAlias=#AA#
Text="Fan"

[GPU2FanSpeedValueString]
Meter=STRING
MeasureName=MSIABGPU2FanSpeed
X=242
Y=0r
FontColor=#colour11#
FontSize=8
FontFace=#font1_name#
StringEffect=Border
FontEffectColor=000000
AntiAlias=#AA#
Text="%1%"

[GPU2FanSpeedBarBack]
Meter=IMAGE
X=75
Y=3r
W=160
H=7
SolidColor=#colour7#
AntiAlias=#AA#
UpdateDivider=3600

[GPU2FanSpeedBar]
Meter=BAR
MeasureName=MSIABGPU2FanSpeed
X=0r
Y=0r
W=160
H=7
BarColor=20A0FF
BarOrientation=HORIZONTAL
AntiAlias=#AA#

;============================================================================
; GPU3 Meter
;============================================================================

[GPU3UsageString]
Meter=STRING
X=30
Y=15r
FontColor=#font1_colour#
FontSize=8
FontFace=#font1_name#
StringEffect=Border
FontEffectColor=000000
AntiAlias=#AA#
Text="GPU 3"

[GPU3PercentageString]
Meter=STRING
MeasureName=MSIABGPU3Usage
X=242
Y=0r
FontColor=#font1_colour#
FontSize=8
FontFace=#font1_name#
StringEffect=Border
FontEffectColor=000000
AntiAlias=#AA#
Text="%1%"

[GPU3UsageBarBack]
Meter=IMAGE
X=75
Y=3r
W=160
H=7
SolidColor=#colour7#
AntiAlias=#AA#
UpdateDivider=3600

[GPU3UsageBar]
Meter=BAR
MeasureName=MSIABGPU3Usage
X=0r
Y=0r
W=160
H=7
BarColor=FFFF00
BarOrientation=HORIZONTAL
AntiAlias=#AA#

;============================================================================
; GPU3 Temperature
;============================================================================

[GPU3TemperatureString]
Meter=STRING
X=30
Y=15r
FontColor=#font1_colour#
FontSize=8
FontFace=#font1_name#
StringEffect=Border
FontEffectColor=000000
AntiAlias=#AA#
Text="Temp"

[GPU3TemperatureValueString]
Meter=STRING
MeasureName=MSIABGPU3Temperature
X=242
Y=0r
FontColor=#colour11#
FontSize=8
FontFace=#font1_name#
StringEffect=Border
FontEffectColor=000000
AntiAlias=#AA#
Text="%1°C"

[GPU3TemperatureBarBack]
Meter=IMAGE
X=75
Y=3r
W=160
H=7
SolidColor=#colour7#
AntiAlias=#AA#
UpdateDivider=3600

[GPU3TemperatureBar]
Meter=BAR
MeasureName=MSIABGPU3Temperature
X=0r
Y=0r
W=160
H=7
BarColor=#colour11#
BarOrientation=HORIZONTAL
AntiAlias=#AA#

;============================================================================
; GPU3 FanSpeed
;============================================================================

[GPU3FanSpeedString]
Meter=STRING
X=30
Y=15r
FontColor=#font1_colour#
FontSize=8
FontFace=#font1_name#
StringEffect=Border
FontEffectColor=000000
AntiAlias=#AA#
Text="Fan"

[GPU3FanSpeedValueString]
Meter=STRING
MeasureName=MSIABGPU3FanSpeed
X=242
Y=0r
FontColor=#colour11#
FontSize=8
FontFace=#font1_name#
StringEffect=Border
FontEffectColor=000000
AntiAlias=#AA#
Text="%1%"

[GPU3FanSpeedBarBack]
Meter=IMAGE
X=75
Y=3r
W=160
H=7
SolidColor=#colour7#
AntiAlias=#AA#
UpdateDivider=3600

[GPU3FanSpeedBar]
Meter=BAR
MeasureName=MSIABGPU3FanSpeed
X=0r
Y=0r
W=160
H=7
BarColor=20A0FF
BarOrientation=HORIZONTAL
AntiAlias=#AA#

;============================================================================
; GPU4 Meter
;============================================================================

[GPU4UsageString]
Meter=STRING
X=30
Y=15r
FontColor=#font1_colour#
FontSize=8
FontFace=#font1_name#
StringEffect=Border
FontEffectColor=000000
AntiAlias=#AA#
Text="GPU 4"

[GPU4PercentageString]
Meter=STRING
MeasureName=MSIABGPU4Usage
X=242
Y=0r
FontColor=#font1_colour#
FontSize=8
FontFace=#font1_name#
StringEffect=Border
FontEffectColor=000000
AntiAlias=#AA#
Text="%1%"

[GPU4UsageBarBack]
Meter=IMAGE
X=75
Y=3r
W=160
H=7
SolidColor=#colour7#
AntiAlias=#AA#
UpdateDivider=3600

[GPU4UsageBar]
Meter=BAR
MeasureName=MSIABGPU4Usage
X=0r
Y=0r
W=160
H=7
BarColor=00FF00
BarOrientation=HORIZONTAL
AntiAlias=#AA#

;============================================================================
; GPU4 Temperature
;============================================================================

[GPU4TemperatureString]
Meter=STRING
X=30
Y=15r
FontColor=#font1_colour#
FontSize=8
FontFace=#font1_name#
StringEffect=Border
FontEffectColor=000000
AntiAlias=#AA#
Text="Fan"

[GPU4TemperatureValueString]
Meter=STRING
MeasureName=MSIABGPU4Temperature
X=242
Y=0r
FontColor=#colour11#
FontSize=8
FontFace=#font1_name#
StringEffect=Border
FontEffectColor=000000
AntiAlias=#AA#
Text="%1%"

[GPU4TemperatureBarBack]
Meter=IMAGE
X=75
Y=3r
W=160
H=7
SolidColor=#colour7#
AntiAlias=#AA#
UpdateDivider=3600

[GPU4TemperatureBar]
Meter=BAR
MeasureName=MSIABGPU4Temperature
X=0r
Y=0r
W=160
H=7
BarColor=#colour11#
BarOrientation=HORIZONTAL
AntiAlias=#AA#

;============================================================================
; GPU4 FanSpeed
;============================================================================

[GPU4FanSpeedString]
Meter=STRING
X=30
Y=15r
FontColor=#font1_colour#
FontSize=8
FontFace=#font1_name#
StringEffect=Border
FontEffectColor=000000
AntiAlias=#AA#
Text="Temp"

[GPU4FanSpeedValueString]
Meter=STRING
MeasureName=MSIABGPU4FanSpeed
X=242
Y=0r
FontColor=#colour11#
FontSize=8
FontFace=#font1_name#
StringEffect=Border
FontEffectColor=000000
AntiAlias=#AA#
Text="%1°C"

[GPU4FanSpeedBarBack]
Meter=IMAGE
X=75
Y=3r
W=160
H=7
SolidColor=#colour7#
AntiAlias=#AA#
UpdateDivider=3600

[GPU4FanSpeedBar]
Meter=BAR
MeasureName=MSIABGPU4FanSpeed
X=0r
Y=0r
W=160
H=7
BarColor=20A0FF
BarOrientation=HORIZONTAL
AntiAlias=#AA#
