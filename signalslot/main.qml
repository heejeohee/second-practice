import QtQuick 2.6
import QtQuick.Window 2.2
import hello 1.0

Item{
    property int num: 1
    signal qmlsignal(int getnum)

    width:300
    height: 300

    Mainview{
    id : mainview}

    Rectangle{
        width: 200
        height: 200
        color : "grey"
        MouseArea{
            anchors.fill: parent
            onClicked: {mainview.testfunc(num)
            num += 1;
        }
        }
    }
    Text{
        id : mytext
        x : 100

        text : "1"
    }
}

