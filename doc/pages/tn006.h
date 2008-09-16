namespace Vaca {

/**

@page page_tn_006 TN006: Deleting a Widget inside its event

There are a big problem with signals: <b>YOU CAN'T DELETE A WIDGET
INSIDE AN EVENT WHICH THE WIDGET BY ITSELF GENERATED</b>. The solution
is quite simple: Use the @link Vaca::delete_widget delete_widget@endlink
function.

@image html DeleteInEvent.png

See the @c TextEditor example, it uses the @c delete_widget to
delete an @link Vaca::MdiChild MdiChild@endlink when its close
button is pushed by the user.

@see @link Vaca::Frame#onClose Frame::onClose@endlink,
     @link Vaca::delete_widget delete_widget@endlink

*/

}