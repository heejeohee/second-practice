import QtQuick 2.6
import QtQuick.Window 2.2
//import hello 1.0

Item{
    property int num: 1
    signal qmlsignal(int getnum)

    width:300
    height: 300

    Rectangle{
        width: 200
        height: 200
        color : "grey"
        MouseArea{
            anchors.fill: parent
            onClicked: {JH.num += 1;
        }
        }

    Text{
        id : mytext
        anchors.fill: parent
        horizontalAlignment: Text.AlignHCenter
        verticalAlignment: Text.AlignVCenter
        font.pixelSize: 50


        text : JH.num  // 바인딩 되어있어서 num 변하면 윈도우의 텍스트도 바뀜
        onTextChanged: {console.log("qml text changed !")}
    }
}
}
