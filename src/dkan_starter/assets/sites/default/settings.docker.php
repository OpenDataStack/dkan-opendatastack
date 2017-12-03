<?php

if (getenv('DB_NAME')) {
  $databases = array (
    'default' =>
    array (
      'default' =>
      array (
        'database' => getenv('DB_NAME'),
        'username' => getenv('DB_USER'),
        'password' => getenv('DB_PASSWORD'),
        'host' => getenv('DB_HOST'),
        'port' => '',
        'driver' => 'mysql',
        'prefix' => '',
      ),
    ),
  );


  # Workaround for permission issues with NFS shares in Vagrant
  $conf['file_chmod_directory'] = 0777;
  $conf['file_chmod_file'] = 0666;

  // Define our environment to use.
  if (getenv('CI')) {
    // On circleCI, use the testing environment.
    define('ENVIRONMENT', 'testing');
  }
  else {
    // Everywhere else, use the local environment.
    define('ENVIRONMENT', 'local');
  }
}

if (getenv('MEMCACHED_HOST')) {
  $memcache_server = getenv('MEMCACHED_HOST') . ':11211';
  $conf['memcache_servers'] = array($memcache_server => 'default');
  $conf['cache_backends'][] = 'sites/all/modules/contrib/memcache/memcache.inc';
  $conf['cache_default_class'] = 'MemCacheDrupal';
  $conf['cache_class_cache_form'] = 'DrupalDatabaseCache';
}
