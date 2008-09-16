namespace Vaca {

/**

@page page_tn_013 TN013: All menu-items must have their own ID

Every @link Vaca::MenuItem MenuItem@endlink that you create must have
its own @link Vaca::CommandId CommandId@endlink. See the @c Undo example
to see how to create a @link Vaca::Menu Menu@endlink where its items change
over time.

This also is true if you don't use commands, for example, if you
override the @link Vaca::MenuItem#onAction MenuItem::onAction@endlink
to control the actions.

*/

}