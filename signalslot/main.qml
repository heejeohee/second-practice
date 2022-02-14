import QtQuick 2.6
import QtQuick.Window 2.2

Item{
    width:300
    height: 300

    Rectangle{
        id : _mainrect
        width: 200
        height: 200
        color: isOn ? "gray" : "green"

        property bool isOn: true
        MouseArea{
            anchors.fill: parent
            onClicked: {
                isOn=true;
                console.log("clicked")}
        }
    }
    Text{
        id : mytext
        x : 100

        text : "1"
    }
}
//Window {
//    visible: true
//    width: 640
//    height: 480
//    title: qsTr("Hello World")
//    MainForm {
//        color: "yellow"
//        anchors.fill: parent
//        mouseArea.onClicked: {
//            console.log(qsTr('Clicked on background. Text: "' + textEdit.text + '"'))
//        }
//    }
//}
