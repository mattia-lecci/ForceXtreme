;----------------------------------------------------------------------------
; Combined Core Usage
;----------------------------------------------------------------------------

[CombinedUsageMeasure]
Measure=Calc
Formula=(CPU1Core1 + CPU1Core2 + CPU1Core3 + CPU1Core4 + CPU1Core5 + CPU1Core6 + CPU1Core7 + CPU1Core8 + CPU1Core9 + CPU1Core10 + CPU1Core11 + CPU1Core12)/#PROCESSORMEASURE#
MinValue=0
MaxValue=100

[CombinedUsageLineString]
Meter=STRING
MeasureName=CombinedUsageMeasure
X=30
Y=5r
FontColor=#font1_colour#
FontSize=8
FontFace=#font1_name#
AntiAlias=#AA#
StringEffect=Border
FontEffectColor=000000
Text="Average Core Usage: %1%"

;----------------------------------------------------------------------------
; Core2 Usage
;----------------------------------------------------------------------------

[CPU1Core2UsageLine]
Meter=Line
MeasureName=CPU1Core2
X=30
Y=0r
H=46
W=240
LineCount=1
LineColor=00FFFF
AntiAlias=#AA#

;----------------------------------------------------------------------------
; Core1 Usage
;----------------------------------------------------------------------------

[CPU1Core1UsageLine]
Meter=Line
MeasureName=CPU1Core1
X=30
Y=0r
H=46
W=240
LineCount=1
LineColor=FF00FF
AntiAlias=#AA#
