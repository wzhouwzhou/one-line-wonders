<?php
$message = 'Hello '.($user->is_logged_in() ? $user->get('first_name') : 'Guest');