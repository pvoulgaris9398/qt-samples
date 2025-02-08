import QtQuick

Column {
    spacing: 2

    Repeater {
        model: 10
        delegate: BlueBox {
            required property int index
            width: 100
            height: 32
            text: index
        }
    }
}
