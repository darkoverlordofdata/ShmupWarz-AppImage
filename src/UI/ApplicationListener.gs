[indent=4]
/**
 * ApplicationListener.gs
 *  port of libgdx.
 * 
 *
 */
namespace Bosco.UI
    interface ApplicationListener
        def abstract create()
        def abstract resize(width: int, height: int)
        def abstract render(delta: double)
        def abstract pause()
        def abstract resume()
        def abstract dispose()
        