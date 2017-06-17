;============================================================================
; CPU1Core1 Meter
;============================================================================

[CPU1Core1UsageString]
Meter=STRING
X=30
Y=15r
FontColor=#font1_colour#
FontSize=8
FontFace=#font1_name#
StringEffect=Border
FontEffectColor=000000
AntiAlias=#AA#
Text="Core 1"

[CPU1Core1PercentageString]
Meter=STRING
MeasureName=CPU1Core1
X=242
Y=0r
FontColor=#font1_colour#
FontSize=8
FontFace=#font1_name#
StringEffect=Border
FontEffectColor=000000
AntiAlias=#AA#
Text="%1%"

[CPU1Core1UsageBarBack]
Meter=IMAGE
X=75
Y=3r
W=160
H=7
SolidColor=#colour7#
AntiAlias=#AA#
UpdateDivider=3600

[CPU1Core1UsageBar]
Meter=BAR
MeasureName=CPU1Core1
X=0r
Y=0r
W=160
H=7
BarColor=FF00FF
BarOrientation=HORIZONTAL
AntiAlias=#AA#

;============================================================================
; CPU1Core2 Meter
;============================================================================

[CPU1Core2UsageString]
Meter=STRING
X=30
Y=10r
FontColor=#font1_colour#
FontSize=8
FontFace=#font1_name#
StringEffect=Border
FontEffectColor=000000
AntiAlias=#AA#
Text="Core 2"

[CPU1Core2PercentageString]
Meter=STRING
MeasureName=CPU1Core2
X=242
Y=0r
FontColor=#font1_colour#
FontSize=8
FontFace=#font1_name#
StringEffect=Border
FontEffectColor=000000
AntiAlias=#AA#
Text="%1%"

[CPU1Core2UsageBarBack]
Meter=IMAGE
X=75
Y=3r
W=160
H=7
SolidColor=#colour7#
AntiAlias=#AA#
UpdateDivider=3600

[CPU1Core2UsageBar]
Meter=BAR
MeasureName=CPU1Core2
X=0r
Y=0r
W=160
H=7
BarColor=00FFFF
BarOrientation=HORIZONTAL
AntiAlias=#AA#
