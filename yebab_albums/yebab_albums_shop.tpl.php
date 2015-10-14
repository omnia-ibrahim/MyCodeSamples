<?php 
if (count($shop->yebab_images)) { ?>
<table id="album-shop-<?= $shop->nid; ?>" class="album-shop">
<tr>
<td>
  <table class='shop-data'>
    <tr>
      <th><?= t('Shop Name'); ?></th>
      <th><?= t('Email'); ?></th>
      <th><?= t('Phone'); ?></th>
    </tr>
    
    <tr>
      <td><?= l($shop->title, 'node/'. $shop->nid); ?></td>
      <td><?= $shop->email; ?></td>
      <td><?= $shop->phone; ?></td>
    </tr>
  </table>
  <div class='shop_images_list_count'>
    <?php print t('(!count) Image In This Album.', array('!count' => count($shop->yebab_images))); ?>
  </div>
  <div class='shop_images_list'>
  <?php
    $shop_counter = 0;
    foreach ($shop->yebab_images as $image) {
      if ($shop_counter < 6) {
      $img = theme('imagecache', 'yebab_mini_thumb', $image->images['_original'], $image->title, $image->title);

      if ($img) {
        print l($img, 'node/'. $image->nid, array('html' => TRUE)).'&nbsp;&nbsp;&nbsp;';
      }
      else {
        print l(theme('image', $image->images['_original'], $image->title, $image->title, array('width' => 80, 'height' => 80), FALSE), 'node/'. $image->nid, array('html' => TRUE)).'&nbsp;&nbsp;&nbsp;';
      }
      $shop_counter ++;
     }
    }
  ?>
  </div>
</td>
</tr>
</table>
<?php } ?>
