# Generated by Django 5.0.6 on 2024-06-30 18:21

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('Books', '0008_remove_bookmodel_description_and_more'),
    ]

    operations = [
        migrations.AddField(
            model_name='bookmodel',
            name='description',
            field=models.CharField(default=1, max_length=10000),
            preserve_default=False,
        ),
        migrations.RemoveField(
            model_name='bookmodel',
            name='category',
        ),
        migrations.AlterField(
            model_name='bookmodel',
            name='image',
            field=models.ImageField(upload_to='image/uploads'),
        ),
        migrations.AlterField(
            model_name='bookmodel',
            name='price',
            field=models.DecimalField(decimal_places=2, max_digits=12),
        ),
        migrations.AlterField(
            model_name='bookmodel',
            name='title',
            field=models.CharField(max_length=100),
        ),
        migrations.AddField(
            model_name='bookmodel',
            name='category',
            field=models.ManyToManyField(blank=True, null=True, to='Books.category'),
        ),
    ]