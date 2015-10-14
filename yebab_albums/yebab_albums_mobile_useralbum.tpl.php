<?php
$images = upload_image_load($album);
if ($images) {
  $image = array_shift($images);
  $image = node_load($image->nid);
  ?>
<div class="album_thumb">
  <?php 
    $img = theme('imagecache', 'yebab_thumb', $image->images['_original'], $album->title, $album->title);
    if ($img) {
     print l( $img.'<br/><span class="album_title_mobile">'. $album->title . '</span>', 'node/'. $album->nid, array('html' => TRUE));
    }
    else {
     print l( theme('image', $image->images['_original'], $album->title, $album->title, array('width' => 128, 'height' => 128), FALSE).'<br/><span class="album_title_mobile">'.  $album->title . '</span>', 'node/'. $album->nid, array('html' => TRUE));   
    } 
  ?>
</div>
<?php
}
else { ?>
<div class="album_thumb">
  <?php print l(theme('image', drupal_get_path('module', 'yebab_albums') .'/assets/default_thumb.png') . $album->title, 'node/'. $node->nid, array('html' => TRUE)); ?>
</div>
<?php } ?>
