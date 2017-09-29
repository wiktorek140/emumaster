import QtQuick 2.0
import Sailfish.Silica 1.0

Dialog {

    property string message

         Column {
             width: parent.width

             DialogHeader { }

             ViewPlaceholder {
                enabled: true
                text: "Oops!"
                hintText: message
             }

         }

         onDone: {
             if (result == DialogResult.Accepted) {
                 //name = nameField.text
             }
         }
}

