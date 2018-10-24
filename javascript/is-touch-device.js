const isTouchDevice = () => !!('ontouchstart' in window || (window.DocumentTouch && document instanceof DocumentTouch))
